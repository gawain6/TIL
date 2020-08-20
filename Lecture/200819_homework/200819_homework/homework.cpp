#include <iostream>
using namespace std;

/*
1.
*/

void main() {
	int money, cnt=0, pick = 0, cola = 100, cider = 200, fanta = 300;

	while (pick != 4) {
		cout << "소지금: ";
		if (cnt != 0)
			cout << money << endl;
		else {
			cin >> money;
			++cnt;
		}
		cout << "############################################" << endl;
		cout << "메뉴: 1.콜라(100원) 2.사이다(200원) 3.환타(300원) 4.반환" << endl;
		cout << "############################################" << endl;
		cin >> pick;
		switch (pick) {
			case 1:
				if (money >= cola) {
					money -= cola;
					cout << "콜라 구매 완료!" << endl;
				}
				else
					cout << "소지금이 부족합니다." << endl;
				break;
			case 2:
				if (money >= cider) {
					money -= cider;
					cout << "사이다 구매 완료!" << endl;
				}
				else
					cout << "소지금이 부족합니다." << endl;
				break;
			case 3:
				if (money >= fanta) {
					money -= fanta;
					cout << "환타 구매 완료!" << endl;
				}
				else
					cout << "소지금이 부족합니다." << endl;
				break;
			case 4:
				cout << "거스름 돈은 " << money << " 입니다." << endl;
				break;
			default:
				cout << "메뉴에 없는 상품입니다." << endl;
				break;
		}
		if (pick != 4) {
			system("pause");
			system("cls");
		}
	}
}