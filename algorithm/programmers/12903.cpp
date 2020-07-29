#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. 일련의 문자열을 입력받는다. (1 이상의 문자열)
 * 2. 문자열의 문자 개수가 홀수면 가운데 문자 하나만 출력한다.
 * 3. 짝수면 가운데 문자 2개를 출력한다.
 * 4. 가운데 문자는 전체 길이 / 2를 해서 나온 값-1의 배열 자리수의 문자와 그 다음 배열의 자리수에 있는 문자를 출력하면 된다.
 */

string solution(string s);

int main(void) {
	string s;

	cin >> s;
	cout << solution(s) << endl;
	return 0;
}

string solution(string s) {
    string answer = "";
	int size = s.size();
	int half = size/2;

	if(size%2 != 0) answer = s.substr(half, 1);
	else if(size%2 == 0) answer = s.substr(half-1, 2);
    return answer;
}