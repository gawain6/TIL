#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. ��¥�� ������ �˱� ���ؼ��� 1/1 ���� �� ���� �������� �˾ƾ���.
 * 2. ���� ��� 1/5�� ȭ�����ε�, 1/1 �ݿ��Ϻ��� 1/5 ȭ���ϱ����� 4�� �Ĵ�.
 * 3. �׷��� 5�� 7�� ������ �������� 5-1=4�̹Ƿ� ȭ����. �̷� ������ ������ �˾Ƴ���.
 * 4. 0=��, 1=��, 2=��, 3=��, 4=ȭ, 5=��, 6=��
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
    int n = 0; // �� ��¥
    int day = 0; // ����

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