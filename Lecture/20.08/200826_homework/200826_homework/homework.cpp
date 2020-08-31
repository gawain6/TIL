#include <iostream>

using namespace std;

void Vending_Machine();
void Input_Coin(int* _iCoin);
void Show_Menu(int _iCoin, int* _iSelect);


void main()
{
	Vending_Machine();
}

void Input_Coin(int* _iCoin)
{
	cout << "������: ";
	cin >> *_iCoin;
}

void Show_Menu(int _iCoin, int* _iSelect)
{
	system("cls");
	cout << "������: " << _iCoin << endl;
	cout << "======================================================" << endl;
	cout << "1.�ݶ�(100��) 2.���̴�(200��) 3.ȯŸ(300��) 4.��ȯ" << endl;
	cout << "======================================================" << endl;
	cout << "�Է�: ";
	cin >> *_iSelect;
}

void Vending_Machine()
{
	int iCoin = 0, iSelect = 0;
	bool bCheck = true;

	Input_Coin(&iCoin);

	while (bCheck)
	{
		Show_Menu(iCoin, &iSelect);

		switch (iSelect)
		{
		case 1:
			if (100 <= iCoin)
			{
				cout << "�ݶ� ����!" << endl;
				iCoin -= 100;
			}
			else
				cout << "������ ����" << endl;
			break;
		case 2:
			if (200 <= iCoin)
			{
				cout << "���̴� ����!" << endl;
				iCoin -= 200;
			}
			else
				cout << "������ ����" << endl;
			break;
		case 3:
			if (300 <= iCoin)
			{
				cout << "ȯŸ ����!" << endl;
				iCoin -= 300;
			}
			else
				cout << "������ ����" << endl;
			break;
		case 4:
			bCheck = false;
			break;
		default:
			break;
		}
		system("pause");
	}

	system("cls");
	cout << "�Ž��� ���� " << iCoin << "�� �Դϴ�." << endl;
}
