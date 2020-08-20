#include <iostream>
using namespace std;

void main() {
	int sum = 0;
	int num = 0;

	do {
		cout << "입력: ";
		sum += num;
		cin >> num;
	} while (-1 != num);
	
	cout << "총 합: " << sum << endl;
	// rand 이용해서 가위바위보 만들기
}