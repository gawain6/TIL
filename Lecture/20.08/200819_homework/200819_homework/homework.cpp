#include <iostream>
using namespace std;

/*
1.
*/

void main() {
	int money, cnt=0, pick = 0, cola = 100, cider = 200, fanta = 300;

	while (pick != 4) {
		cout << "������: ";
		if (cnt != 0)
			cout << money << endl;
		else {
			cin >> money;
			++cnt;
		}
		cout << "############################################" << endl;
		cout << "�޴�: 1.�ݶ�(100��) 2.���̴�(200��) 3.ȯŸ(300��) 4.��ȯ" << endl;
		cout << "############################################" << endl;
		cin >> pick;
		switch (pick) {
			case 1:
				if (money >= cola) {
					money -= cola;
					cout << "�ݶ� ���� �Ϸ�!" << endl;
				}
				else
					cout << "�������� �����մϴ�." << endl;
				break;
			case 2:
				if (money >= cider) {
					money -= cider;
					cout << "���̴� ���� �Ϸ�!" << endl;
				}
				else
					cout << "�������� �����մϴ�." << endl;
				break;
			case 3:
				if (money >= fanta) {
					money -= fanta;
					cout << "ȯŸ ���� �Ϸ�!" << endl;
				}
				else
					cout << "�������� �����մϴ�." << endl;
				break;
			case 4:
				cout << "�Ž��� ���� " << money << " �Դϴ�." << endl;
				break;
			default:
				cout << "�޴��� ���� ��ǰ�Դϴ�." << endl;
				break;
		}
		if (pick != 4) {
			system("pause");
			system("cls");
		}
	}
}