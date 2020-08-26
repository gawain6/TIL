#include <iostream>
using namespace std;

void VendingMachine();
void ShowMenu();
void ShowMoney();
void ShowPurchaseResult(int _item);

int money = 0, cnt = 0, pick = 0;

void main()
{
	VendingMachine();
}

void VendingMachine()
{
	int cola = 100, cider = 200, fanta = 300;

	while (pick != 4)
	{
		ShowMoney();
		ShowMenu();
		cin >> pick;

		switch (pick)
		{
		case 1:
			ShowPurchaseResult(cola);
			break;
		case 2:
			ShowPurchaseResult(cider);
			break;
		case 3:
			ShowPurchaseResult(fanta);
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

void ShowMoney()
{
	cout << "������: ";
	if (cnt != 0)
		cout << money << endl;
	else
	{
		cin >> money;
		++cnt;
	}
}

void ShowMenu()
{
	cout << "############################################" << endl;
	cout << "�޴�: 1.�ݶ�(100��) 2.���̴�(200��) 3.ȯŸ(300��) 4.��ȯ" << endl;
	cout << "############################################" << endl;
}

void ShowPurchaseResult(int _item)
{
	if (money >= _item)
	{
		money -= _item;
		cout << ((100 == _item) ? "�ݶ�" : (200 == _item) ? "���̴�" : "ȯŸ");
		cout << " ���� �Ϸ�!" << endl;
	}
	else
		cout << "�������� �����մϴ�." << endl;
}