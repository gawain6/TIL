#include <iostream>
using namespace std;

namespace A
{
	void Render()
	{
		cout << 'A' << endl;
	}
}

namespace B
{
	void Render()
	{
		cout << 'B' << endl;
	}
}

void main()
{
	A::Render();
	B::Render();
	cout << "Hello World!" << endl;
}