#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. ���̰� 1�̻��� ��ҹ��ڰ� ���� ���ڿ� s�� �Է¹޴´�.
 * 2. �Է¹��� ���ڿ� s�� solution �Լ��� �Ű������� �����Ѵ�.
 * 3. s�� 0��° �ε����� answer�� �ִ´�.
 * 4. s�� 1��° �ε����� answer�� ������ �ε����� ���ؼ� ������ �ε������� ũ�� ���� �ε����� ������ �߰��Ѵ�.
 * 5. ������ �ε������� ������, answer�� ó�� �ε������� ũ�⸦ ���Ѵ�.
 * 6. s�� ������ �ε������� 4~5�� �ݺ� �� answer�� ��ȯ�Ѵ�.
 * 7. ũ�� ������ ���ĵ� ��ȯ�� ���ڿ��� ����Ѵ�.
 */

string solution(string s);

int main(void) {
	string s="adnv";

	// cin >> s;
	cout << solution(s) << endl;
	return 0;
}

string solution(string s) { // cab
    string answer = "";
	int size = s.size();

	for(int i=0; i<size; i++) { // i = 0
		if(i == 0) {
			answer = s.at(0);
			continue;
		}
		for(int j=0; j<answer.size(); j++) {
			if(j == 0 && s.at(i) > answer.back()) answer.append(1, s.at(i));
			else {
				if(s.at(i) < answer.at(j)) answer.insert(j, 1, answer.at(j));
				break;
			}
		}
	}
    return answer;
}