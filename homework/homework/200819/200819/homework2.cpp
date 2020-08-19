#include <iostream>
using namespace std;

void main()
{
	int money, principal, temp, pick = 0, cola = 100, cider = 200, fanta = 300;

	cout << "소지금: ";
	cin >> money;
	principal = money;

	while (pick != 4)
	{
		if (principal != money)
			cout << "소지금: " << money << endl;
		cout << "############################################" << endl;
		cout << "메뉴: 1.콜라(100원) 2.사이다(200원) 3.환타(300원) 4.반환" << endl;
		cout << "############################################" << endl;
		cin >> pick;
		temp = money;
		switch (pick) {
			case 1:
				money = (money >= cola) ? money - cola : money;
				if (money == temp)
				{
					cout << "소지금이 부족합니다." << endl;
					break;
				}
				cout << "콜라 구매 완료!" << endl;
				break;
			case 2:
				money = (money >= cider) ? money - cider : money;
				if (money == temp)
				{
					cout << "소지금이 부족합니다." << endl;
					break;
				}
				cout << "사이다 구매 완료!" << endl;
				break;
			case 3:
				money = (money >= fanta) ? money - fanta : money;
				if (money == temp)
				{
					cout << "소지금이 부족합니다." << endl;
					break;
				}
				cout << "환타 구매 완료!" << endl;
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