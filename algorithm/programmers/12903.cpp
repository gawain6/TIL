#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. �Ϸ��� ���ڿ��� �Է¹޴´�. (1 �̻��� ���ڿ�)
 * 2. ���ڿ��� ���� ������ Ȧ���� ��� ���� �ϳ��� ����Ѵ�.
 * 3. ¦���� ��� ���� 2���� ����Ѵ�.
 * 4. ��� ���ڴ� ��ü ���� / 2�� �ؼ� ���� ��-1�� �迭 �ڸ����� ���ڿ� �� ���� �迭�� �ڸ����� �ִ� ���ڸ� ����ϸ� �ȴ�.
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