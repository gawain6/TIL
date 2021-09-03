#include <iostream>

#include <string>
#include <vector>

using namespace std;

int map[110][110];

int GetMin(int min, int num)
{ 
	return (min < num) ? min : num;
}

int Turning(int x1, int y1, int x2, int y2)
{
	int temp = map[x1][y1]; 
	int min = temp;

	for (int x = x1; x < x2; ++x)
	{
		min = GetMin(min, map[x][y1]);
		map[x][y1] = map[x + 1][y1];
	}

	for (int y = y1; y < y2; ++y)
	{
		min = GetMin(min, map[x2][y]);
		map[x2][y] = map[x2][y + 1];
	}

	for (int x = x2; x > x2; --x)
	{
		min = GetMin(min, map[x][y2]);
		map[x][y2] = map[x - 1][y2];
	}

	for (int y = y2; y > y2; --y)
	{
		min = GetMin(min, map[x1][y]);
		map[x1][y] = map[x1][y - 1];
	}

	map[x1][y1 + 1] = temp;
	return min;
}

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;

	int val = 0;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			++val;
			map[i][j] = val;
		}
	}

	for (int i = 0; i < queries.size(); ++i)
	{
		int x1 = queries[i][0];
		int y1 = queries[i][1];
		int x2 = queries[i][2];
		int y2 = queries[i][3];

		answer.emplace_back(Turning(--x1, --y1, --x2, --y2));
	}

    return answer;
}

int main()
{
	vector<int> res = solution(
		6, 6, 
		{
			{2,2,5,4}, 
			{3,3,6,6}, 
			{5,1,6,3}
		});

	cout << res[0] << endl;
	cout << res[1] << endl;
	cout << res[2] << endl;

	// 8, 10, 25

	return 0;
}
