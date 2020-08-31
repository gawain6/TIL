#include <iostream>
using namespace std;

void main(void) {
	int i, j, num, input1, input2;
	// 문제) while문을 이용하여 구구단 2단 출력하기
	/*i = 2;
	num = 1;
	while (10 > num) {
		cout << i << " * " << num << " = " << i*num << endl;
		++num;
	}*/

	cout << "#################################################" << endl;

	// 문제) while문을 이용하여 구구단 2 ~ 9단 출력하기
	i = 2;
	num = 1;
	while (10 > i) {
			cout << i << " * " << num << " = " << i*num << endl;
		if (10 == num) {
			num = 1;
			++i;
		}
		if (10 > i)
		++num;
	}

	cout << "#################################################" << endl;

	// 문제) for문을 이용하여 구구단 2 ~ 9단 출력하기
	/*for (i = 2; i < 10; ++i) {
		for (j = 1; j < 10; ++j) {
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}*/

	cout << "#################################################" << endl;

	// 문제) for문을 이용하여 입력받은 단의 곱까지만 출력하기 (단과 곱 입력, ex) 단: 5, 곱:3 -> 4단까지 모두 출력하고 5*3까지만 출력)
	/*cin >> input1;
	cin >> input2;

	for (i = 2; i <= input1; ++i) {
		for (j = 1; j < 10; ++j) {
			if (i == input1 && j > input2)
				break;
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}*/

	cout << "#################################################" << endl;

	// 문제) 각 단은 첫 줄에 표시, 각 곱은 세로로 표시하는 구구단 만들기(for문, 9단)
	// 2 * 1 = 2	3 * 1 = 3
	// 2 * 2 = 4	3 * 2 = 6
	// 2 * 3 = 6	3 * 3 = 9 ...
	/*for (i = 1; i < 10; ++i) {
		for (j = 2; j < 10; ++j) {
			cout << j << " * " << i << " = " << i*j << '\t';
		}
		cout << endl;
	}*/
}