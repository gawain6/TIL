#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. 길이가 1이상인 대소문자가 섞인 문자열 s를 입력받는다.
 * 2. 입력받은 문자열 s를 solution 함수에 매개변수로 전달한다.
 * 3. s의 0번째 인덱스를 answer에 넣는다.
 * 4. s의 1번째 인덱스를 answer의 마지막 인덱스와 비교해서 마지막 인덱스보다 크면 다음 인덱스에 값으로 추가한다.
 * 5. 마지막 인덱스보다 작으면, answer의 처음 인덱스부터 크기를 비교한다.
 * 6. s의 마지막 인덱스까지 4~5를 반복 후 answer를 반환한다.
 * 7. 크기 순으로 정렬된 반환된 문자열을 출력한다.
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