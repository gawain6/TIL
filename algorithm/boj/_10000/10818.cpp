#include <iostream>
using namespace std;

int main()
{
	int N, temp, max = 0, min = 0;
	cin >> N;

	for(int i = 0; i < N; ++i)
	{
		cin >> temp;
		if(0 == i) max = min = temp;
		else if(temp > max) max = temp;
		else if(temp < min) min = temp;
	}

	cout << min << " " << max << endl;
}