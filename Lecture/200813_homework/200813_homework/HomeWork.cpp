#include <iostream>
using namespace std;

/*
1. int�� ���� korean, english, math�� �����ϰ�, �� �پ� ������ �Է¹޴´�.
2. ������ ���������� �Է¹����� ############## �� ����Ѵ�.
3. ����, ����, ���� ������ �� �پ� ������ ����Ѵ�.
4. ������ �ٿ� ############## �� ����Ѵ�.
*/

void main()
{
	int korean, english, math;

	cout << "����: ";
	cin >> korean;
	cout << "����: ";
	cin >> english;
	cout << "����: ";
	cin >> math;

	cout << "################" << endl;
	cout << "���� ����: " << korean << endl;
	cout << "���� ����: " << english << endl;
	cout << "���� ����: " << math << endl;
	cout << "################" << endl;
}