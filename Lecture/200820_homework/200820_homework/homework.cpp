#include <iostream>
#include <time.h>
using namespace std;

/*
1. ù �ٿ� 1.���� 2.���� 3.�� 4.���� :: ����Ѵ�.
2. ############################ :: �����ڸ� ����Ѵ�.
3. ����: :: ��� �� �Է¹޴´�.
4. ��ǻ��: ���� :: rand()�� �̿��Ͽ� ����Ѵ�. rand() % 10 ���� Ȧ���� ����, ¦���� ����, 0�̸� ���� ���Ѵ�.
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

		computer = rand() % 10;
		if (0 == computer) {
			cout << "��ǻ��: ��" << endl;
			computer = 3;
		}
		else if (1 == computer % 2) {
			cout << "��ǻ��: ����" << endl;
			computer = 1;
		}
		else {
			cout << "��ǻ��: ����" << endl;
			computer = 2;
		}

		if (1 == input)
			cout << "�����: ����" << endl;
		else if (2 == input)
			cout << "�����: ����" << endl;
		else
			cout << "�����: ��" << endl;

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