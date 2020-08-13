#include <iostream>
using namespace std;

/*
1. int형 변수 korean, english, math를 선언하고, 한 줄씩 점수를 입력받는다.
2. 수학을 마지막으로 입력받으면 ############## 을 출력한다.
3. 국어, 영어, 수학 순으로 한 줄씩 점수를 출력한다.
4. 마지막 줄에 ############## 을 출력한다.
*/

void main()
{
	int korean, english, math;

	cout << "국어: ";
	cin >> korean;
	cout << "영어: ";
	cin >> english;
	cout << "수학: ";
	cin >> math;

	cout << "################" << endl;
	cout << "국어 점수: " << korean << endl;
	cout << "영어 점수: " << english << endl;
	cout << "수학 점수: " << math << endl;
	cout << "################" << endl;
}