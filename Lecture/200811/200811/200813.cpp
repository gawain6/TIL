#include <iostream>
using namespace std;

void main() {
	int num1 = 10;
	int num2;
	int *pt = &num1;

	num2 = *pt;
	cout << num2 << endl;
}