#include <iostream>

/*
 * 1. A, B�� �Է¹ް�, A+B�� ���� ����� 0, 0�� �ԷµǱ� ������ �ݺ��Ѵ�.
 * 2. �ݺ��� while���� ����Ѵ�.
 */

int main(void) {
    int A, B;
    while(1) {
        scanf("%d %d", &A, &B);
        if(A==0 && B==0) break;
        printf("%d\n", A+B);
    }
    return 0;
}