#include <iostream>
using namespace std;

void main() {
	int sum = 0;
	int num = 0;

	do {
		cout << "�Է�: ";
		sum += num;
		cin >> num;
	} while (-1 != num);
	
	cout << "�� ��: " << sum << endl;
	// rand �̿��ؼ� ���������� �����
}