#include <iostream>

/*
 * 1. ù ��° �ٿ��� �׽�Ʈ ���̽� ���� T�� �Է¹޴´�.
 * 2. for������ T��ŭ ���� A, B�� �Է¹ް�, A+B�� ���� ����Ѵ�. 
 */

int main(void) {
    int T, A, B;

    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}