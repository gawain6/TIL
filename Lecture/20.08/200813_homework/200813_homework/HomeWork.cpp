#include <iostream>
using namespace std;

/*
1. int형 변수 korean, english, math를 선언하고, 한 줄씩 점수를 입력받는다.
2. 수학을 마지막으로 입력받으면 ############## 을 출력한다.
3. 국어, 영어, 수학 순으로 한 줄씩 점수를 출력한다.
4. 총점과 평균을 한 줄씩 출력한다.
5. 평균은 float으로 출력한다.
6. if문과 switch문으로 각각 평균에 따른 등급을 추가한다.
*/

void main()
{
	int korean, english, math, total;
	float avg;

	cout << "국어: ";
	cin >> korean;
	cout << "영어: ";
	cin >> english;
	cout << "수학: ";
	cin >> math;
	total = korean + english + math;
	avg = (float)total / 3.f;

	cout << "###############################" << endl;
	cout << "국어 점수: " << korean << endl;
	cout << "영어 점수: " << english << endl;
	cout << "수학 점수: " << math << endl;
	cout << "총점: " << total << endl;
	cout << "평균: " << avg << endl;

	cout << "if#############################" << endl;
	cout << "등급: ";
	if (avg >= 90)
		cout << "A" << endl;
	else if (avg >= 80 && avg < 90)
		cout << "B" << endl;
	else if (avg >= 70 && avg < 80)
		cout << "C" << endl;
	else if (avg >= 60 && avg < 70)
		cout << "D" << endl;
	else if (avg >= 50 && avg < 60)
		cout << "E" << endl;
	else
		cout << "F" << endl;

	cout << "switch##########################" << endl;
	cout << "등급: ";
	switch ((int)avg / 10)
	{
		case 10:
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		case 5:
			cout << "E" << endl;
			break;
		default:
			cout << "F" << endl;
			break;
	}
}