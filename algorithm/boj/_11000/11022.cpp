#include <iostream>

/*
 * 1. 테스트 케이스 개수 T를 입력 받는다.
 * 2-1. for문으로 T만큼 아래 예시처럼 출력한다.
 * 2-2. ex) Case #1: 1 + 1 = 2
 */

int main(void) {
	int T, A, B;

	scanf("%d", &T);
	for(int i=1; i<=T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
	}
	return 0;
}