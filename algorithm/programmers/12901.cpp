#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. 날짜의 요일을 알기 위해서는 1/1 부터 몇 일이 지났는지 알아야함.
 * 2. 예를 들어 1/5은 화요일인데, 1/1 금요일부터 1/5 화요일까지는 4일 후다.
 * 3. 그러니 5를 7로 나누면 나머지가 5-1=4이므로 화요일. 이런 식으로 요일을 알아낸다.
 * 4. 0=금, 1=토, 2=일, 3=월, 4=화, 5=수, 6=목
 */

string solution(int a, int b);

int main(void) {
	int a, b, day;

	cin >> a >> b;
    cout << solution(a, b) << endl;
	return 0;
}

string solution(int a, int b) {
    string answer = "";
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n = 0; // 총 날짜
    int day = 0; // 요일

    for(int i=0; i<a-1; i++) {
        n += month[i];
    }
    n += b;
    day = (n%7)-1;
    if(day < 0) day = 6;

    if(day == 0) answer = "FRI";
    else if(day == 1) answer = "SAT";
    else if(day == 2) answer = "SUN";
    else if(day == 3) answer = "MON";
    else if(day == 4) answer = "TUE";
    else if(day == 5) answer = "WED";
    else if(day == 6) answer = "THU";
    return answer;
}