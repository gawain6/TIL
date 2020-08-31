#include <iostream>
using namespace std;

void main()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << '*';
		}
		cout << endl;
	}

	cout << "\n=========================\n" << endl;

	for (int i = 5; i > 0; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << '*';
		}
		cout << endl;
	}

	cout << "\n=========================\n" << endl;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = i; j < 4; ++j)
		{
			cout << ' ';
		}
		for (int j = 0; j <= i; ++j)
		{
			cout << '*';
		}
		cout << endl;
	}

	cout << "\n=========================\n" << endl;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << ' ';
		}
		for (int j = i; j < 5; ++j)
		{
			cout << '*';
		}
		cout << endl;
	}
}