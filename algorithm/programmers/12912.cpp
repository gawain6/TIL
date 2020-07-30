#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 1. a, b�� �Է� �޴´�. (��Ҵ� �������� ����)
 * 2. ���� a�� b���� ���ٸ� a���� �״�� ��ȯ�Ѵ�.
 * 3. �� �߿� ū ���� max�� ���� ���� min�� �ִ´�.
 * 4. min������ max������ for���� ���� ���� ���� ��ȯ�Ѵ�.
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