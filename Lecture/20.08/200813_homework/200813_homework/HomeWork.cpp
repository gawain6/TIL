#include <iostream>
using namespace std;

/*
1. int�� ���� korean, english, math�� �����ϰ�, �� �پ� ������ �Է¹޴´�.
2. ������ ���������� �Է¹����� ############## �� ����Ѵ�.
3. ����, ����, ���� ������ �� �پ� ������ ����Ѵ�.
4. ������ ����� �� �پ� ����Ѵ�.
5. ����� float���� ����Ѵ�.
6. if���� switch������ ���� ��տ� ���� ����� �߰��Ѵ�.
*/

void main()
{
	int korean, english, math, total;
	float avg;

	cout << "����: ";
	cin >> korean;
	cout << "����: ";
	cin >> english;
	cout << "����: ";
	cin >> math;
	total = korean + english + math;
	avg = (float)total / 3.f;

	cout << "###############################" << endl;
	cout << "���� ����: " << korean << endl;
	cout << "���� ����: " << english << endl;
	cout << "���� ����: " << math << endl;
	cout << "����: " << total << endl;
	cout << "���: " << avg << endl;

	cout << "if#############################" << endl;
	cout << "���: ";
	if (avg >= 90)
		cout << "A" << endl;
	else if (avg >= 80 && avg < 90)
		cout << "B" << endl;
	else if (avg >= 70 && avg < 80)
		cout << "C" << endl;
	else if (avg >= 60 && avg < 70)
		cout << "D" << endl;
	else if (avg >= 50 && avg < 60)
		cout << "E" << endl;
	else
		cout << "F" << endl;

	cout << "switch##########################" << endl;
	cout << "���: ";
	switch ((int)avg / 10)
	{
		case 10:
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		case 5:
			cout << "E" << endl;
			break;
		default:
			cout << "F" << endl;
			break;
	}
}