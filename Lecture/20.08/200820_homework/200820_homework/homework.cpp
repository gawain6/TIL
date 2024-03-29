#include <iostream>
#include <time.h>
using namespace std;

/*
1. 첫 줄에 1.가위 2.바위 3.보 4.종료 :: 출력한다.
2. ############################ :: 구분자를 출력한다.
3. 선택: :: 메뉴 중 하나를 입력받는다.
4. 컴퓨터: 바위 :: rand()를 이용하여 출력한다. (rand() % 3) + 1
5. 사용자: 바위 :: 선택에서 입력한 값을 출력한다.
6. 무승부 입니다!! (승리 입니다!!) (패배 입니다!!) :: 승부의 결과를 출력한다.
7. 1 ~ 2번은 고정 후 콘솔의 내용을 모두 지운다.
8. 3번부터 3번 반복한다.
9. 3번 반복 후 모든 콘솔 내용을 지운다.
9. 승: 1, 패: 0, 무: 2 :: 마지막으로 승부의 결과를 출력한다.
*/

void main() {
	int input, computer, cnt = 0, win = 0, lose = 0, draw = 0;

	srand(unsigned(time(NULL)));

	while (3 != cnt) {
		system("cls");
		cout << "1.가위 2.바위 3.보 4.종료" << endl;
		cout << "##################################" << endl;
		cout << "선택: ";
		cin >> input;

		if (4 == input)
			break;

		computer = (rand() % 3) + 1;
		switch (input) {
		case 1:
			if (1 == computer)
				cout << "컴퓨터: 가위" << endl;
			else if (2 == computer)
				cout << "컴퓨터: 바위" << endl;
			else
				cout << "컴퓨터: 보" << endl;
			cout << "사용자: 가위" << endl;
			break;
		case 2:
			if (1 == computer)
				cout << "컴퓨터: 가위" << endl;
			else if (2 == computer)
				cout << "컴퓨터: 바위" << endl;
			else
				cout << "컴퓨터: 보" << endl;
			cout << "사용자: 바위" << endl;
			break;
		case 3:
			if (1 == computer)
				cout << "컴퓨터: 가위" << endl;
			else if (2 == computer)
				cout << "컴퓨터: 바위" << endl;
			else
				cout << "컴퓨터: 보" << endl;
			cout << "사용자: 보" << endl;
			break;
		default:
			cout << "잘못 입력하였습니다." << endl;
			system("pause");
			continue;
		}

		if (input == computer) {
			cout << "무승부 입니다!!" << endl;
			++draw;
		}
		else if ((1 == input && 3 == computer) || (2 == input && 1 == computer) || (3 == input && 2 == computer)) {
			cout << "승리 입니다!!" << endl;
			++win;
		}
		else {
			cout << "패배 입니다!!" << endl;
			++lose;
		}
		++cnt;
		system("pause");
	}
	system("cls");
	cout << "승: " << win << ", 패: " << lose << ", 무: " << draw << endl;
}