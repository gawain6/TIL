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
			cout << "거스름 돈은 " << money << " 입니다." << endl;
			break;
		default:
			cout << "메뉴에 없는 상품입니다." << endl;
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
	cout << "소지금: ";
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
	cout << "메뉴: 1.콜라(100원) 2.사이다(200원) 3.환타(300원) 4.반환" << endl;
	cout << "############################################" << endl;
}

void ShowPurchaseResult(int _item)
{
	if (money >= _item)
	{
		money -= _item;
		cout << ((100 == _item) ? "콜라" : (200 == _item) ? "사이다" : "환타");
		cout << " 구매 완료!" << endl;
	}
	else
		cout << "소지금이 부족합니다." << endl;
}