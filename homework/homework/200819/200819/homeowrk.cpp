#include <iostream>
using namespace std;

void main()
{
	int korean, math, english, total;
	float avg;

	cout << "=========================" << endl;
	cout << "����: ";
	cin >> korean;
	cout << "����: ";
	cin >> math;
	cout << "����: ";
	cin >> english;

	total = korean + math + english;
	avg = (float)total / 3;
	cout << "����: " << total << endl;
	cout << "���: " << avg << endl;
	cout << "=========================" << endl;
	
	cout << "if=======================" << endl;
	cout << "����� ";
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

	cout << "switch===================" << endl;
	cout << "����� ";
	switch ((int)avg)
	{
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
			cout << "A" << endl;
			break;
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
		case 84:
		case 83:
		case 82:
		case 81:
		case 80:
			cout << "B" << endl;
			break;
		case 79:
		case 78:
		case 77:
		case 76:
		case 75:
		case 74:
		case 73:
		case 72:
		case 71:
		case 70:
			cout << "C" << endl;
			break;
		case 69:
		case 68:
		case 67:
		case 66:
		case 65:
		case 64:
		case 63:
		case 62:
		case 61:
		case 60:
			cout << "D" << endl;
			break;
		case 59:
		case 58:
		case 57:
		case 56:
		case 55:
		case 54:
		case 53:
		case 52:
		case 51:
		case 50:
			cout << "E" << endl;
			break;
		default:
			cout << "F" << endl;
			break;
	}
}

// ##1. ����ǥ�� ��� �߰�
/*
��� ������ ���� ��� �߰�
��, 2���� ���� �غ��ϱ�!
if / switch
A : 90�� �̻�
B : 80�� �̻�, 90�� �̸�
C : 70�� �̻�, 80�� �̸�
D : 60�� �̻�, 70�� �̸�
E : 50�� �̻�, 60�� �̸�
F : 50�� �̸�
*/