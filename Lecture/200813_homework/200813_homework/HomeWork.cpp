#include <iostream>
using namespace std;

/*
1. int�� ���� korean, english, math�� �����ϰ�, �� �پ� ������ �Է¹޴´�.
2. ������ ���������� �Է¹����� ############## �� ����Ѵ�.
3. ����, ����, ���� ������ �� �پ� ������ ����Ѵ�.
4. ������ ����� �� �پ� ����Ѵ�.
5. ����� double�� ����Ѵ�.
6. ������ �ٿ� ############## �� ����Ѵ�.
*/

void main()
{
	int korean, english, math, total;
	double avg;

	cout << "����: ";
	cin >> korean;
	cout << "����: ";
	cin >> english;
	cout << "����: ";
	cin >> math;
	total = korean + english + math;
	avg = (double)total / 3;

	cout << "################" << endl;
	cout << "���� ����: " << korean << endl;
	cout << "���� ����: " << english << endl;
	cout << "���� ����: " << math << endl;
	cout << "����: " << total << endl;
	cout << "���: " << avg << endl;
	cout << "################" << endl;
}