#include <iostream>
using namespace std;

void Func(int* _a);

void main()
{
	int a = 1;

	Func(&a);
	cout << a << endl;
}

void Func(int* _a)
{
	++*_a;
}