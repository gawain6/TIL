#include <iostream>
using namespace std;

void main()
{
	int money, principal, temp, pick = 0, cola = 100, cider = 200, fanta = 300;

	cout << "������: ";
	cin >> money;
	principal = money;

	while (pick != 4)
	{
		if (principal != money)
			cout << "������: " << money << endl;
		cout << "############################################" << endl;
		cout << "�޴�: 1.�ݶ�(100��) 2.���̴�(200��) 3.ȯŸ(300��) 4.��ȯ" << endl;
		cout << "############################################" << endl;
		cin >> pick;
		temp = money;
		switch (pick) {
			case 1:
				money = (money >= cola) ? money - cola : money;
				if (money == temp)
				{
					cout << "�������� �����մϴ�." << endl;
					break;
				}
				cout << "�ݶ� ���� �Ϸ�!" << endl;
				break;
			case 2:
				money = (money >= cider) ? money - cider : money;
				if (money == temp)
				{
					cout << "�������� �����մϴ�." << endl;
					break;
				}
				cout << "���̴� ���� �Ϸ�!" << endl;
				break;
			case 3:
				money = (money >= fanta) ? money - fanta : money;
				if (money == temp)
				{
					cout << "�������� �����մϴ�." << endl;
					break;
				}
				cout << "ȯŸ ���� �Ϸ�!" << endl;
				break;
			case 4:
				cout << "�Ž��� ���� " << money << " �Դϴ�." << endl;
				break;
			default:
				cout << "�޴��� ���� ��ǰ�Դϴ�." << endl;
				break;
		}
		if (pick != 4)
		{
			system("pause");
			system("cls");
		}
	}
}