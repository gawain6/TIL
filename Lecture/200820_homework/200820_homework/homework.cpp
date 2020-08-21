#include <iostream>
#include <time.h>
using namespace std;

/*
1. ù �ٿ� 1.���� 2.���� 3.�� 4.���� :: ����Ѵ�.
2. ############################ :: �����ڸ� ����Ѵ�.
3. ����: :: �޴� �� �ϳ��� �Է¹޴´�.
4. ��ǻ��: ���� :: rand()�� �̿��Ͽ� ����Ѵ�. (rand() % 3) + 1
5. �����: ���� :: ���ÿ��� �Է��� ���� ����Ѵ�.
6. ���º� �Դϴ�!! (�¸� �Դϴ�!!) (�й� �Դϴ�!!) :: �º��� ����� ����Ѵ�.
7. 1 ~ 2���� ���� �� �ܼ��� ������ ��� �����.
8. 3������ 3�� �ݺ��Ѵ�.
9. 3�� �ݺ� �� ��� �ܼ� ������ �����.
9. ��: 1, ��: 0, ��: 2 :: ���������� �º��� ����� ����Ѵ�.
*/

void main() {
	int input, computer, cnt = 0, win = 0, lose = 0, draw = 0;

	srand(unsigned(time(NULL)));

	while (3 != cnt) {
		system("cls");
		cout << "1.���� 2.���� 3.�� 4.����" << endl;
		cout << "##################################" << endl;
		cout << "����: ";
		cin >> input;

		if (4 == input)
			break;

		computer = (rand() % 3) + 1;
		switch (input) {
		case 1:
			if (1 == computer)
				cout << "��ǻ��: ����" << endl;
			else if (2 == computer)
				cout << "��ǻ��: ����" << endl;
			else
				cout << "��ǻ��: ��" << endl;
			cout << "�����: ����" << endl;
			break;
		case 2:
			if (1 == computer)
				cout << "��ǻ��: ����" << endl;
			else if (2 == computer)
				cout << "��ǻ��: ����" << endl;
			else
				cout << "��ǻ��: ��" << endl;
			cout << "�����: ����" << endl;
			break;
		case 3:
			if (1 == computer)
				cout << "��ǻ��: ����" << endl;
			else if (2 == computer)
				cout << "��ǻ��: ����" << endl;
			else
				cout << "��ǻ��: ��" << endl;
			cout << "�����: ��" << endl;
			break;
		default:
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
			system("pause");
			continue;
		}

		if (input == computer) {
			cout << "���º� �Դϴ�!!" << endl;
			++draw;
		}
		else if ((1 == input && 3 == computer) || (2 == input && 1 == computer) || (3 == input && 2 == computer)) {
			cout << "�¸� �Դϴ�!!" << endl;
			++win;
		}
		else {
			cout << "�й� �Դϴ�!!" << endl;
			++lose;
		}
		++cnt;
		system("pause");
	}
	system("cls");
	cout << "��: " << win << ", ��: " << lose << ", ��: " << draw << endl;
}