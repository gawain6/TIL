#include <iostream>

/*
 * 1. �׽�Ʈ ���̽� ���� T�� �Է� �޴´�.
 * 2-1. for������ T��ŭ �Ʒ� ����ó�� ����Ѵ�.
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