#include <iostream>

/*
 * 1. n�� �Է¹޴´�.
 * 2. for������ n���� 1���� �� �� �� ����Ѵ�.
 */

int main(void) {
    int n;

    scanf("%d", &n);
    for(int i=n; i>0; i--) {
        printf("%d\n", i);
    }
    return 0;
}