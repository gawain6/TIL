#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. a, b를 입력 받는다. (대소는 정해지지 않음)
 * 2. 만약 a와 b값이 같다면 a값을 그대로 반환한다.
 * 3. 둘 중에 큰 값을 max에 작은 값을 min에 넣는다.
 * 4. min값부터 max값까지 for문을 돌려 값을 더해 반환한다.
 */

long long solution(int a, int b);

int main(void) {
	long long a, b;

	cin >> a >> b;
	cout << solution(a, b) << endl;
	return 0;
}

long long solution(int a, int b) {
    long long answer = 0, max, min;

	if(a == b) return a;
	max = (a > b) ? a : b;
	min = (a > b) ? b : a;
	for(int i=min; i<=max; i++) {
		answer += i;
	}
    return answer;
}