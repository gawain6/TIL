#include <iostream>

/*
 * 1. ù �ٿ� �׽�Ʈ ���̽� T�� �Է¹޴´�.
 * 2. for������ T��ŭ A, B�� �Է¹ް�, A+B���� Case #1: 2 �������� ����Ѵ�.
 */

int main(void) {
    int T, A, B;

    scanf("%d", &T);
    for(int i=1; i<=T; i++) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A+B);
    }
    return 0;
}