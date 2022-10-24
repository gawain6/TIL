#include <iostream>
#include <list>

using namespace std;

int N, K;
list<int> li;
list<int>::iterator cur;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;

	for (int i = 1; i <= N; ++i)
		li.emplace_back(i);

	cur = li.begin();
	K -= 1;
	cout << "<";

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < K; ++j)
		{
			++cur;
			if (li.end() == cur) cur = li.begin();
		}

		cout << *cur;

		if (cur == --li.end())
		{
			li.pop_back();
			cur = li.begin();
		}
		else
			cur = li.erase(cur);

		if (i != N - 1) cout << ", ";
	}

	cout << ">";
	return 0;
}