#include <stdio.h>

/*
 * 1. a, b�� �Է� ����
 * 2. b�� �ڸ������� ����
 * 3. a�� ���� �ڸ����� 3���� ����
 * 4. ���� 3���� ���
*/

int main(void) {
    int a, b, n1, n2, n3;

    scanf("%d %d", &a, &b);
    n1 = a * (b % 10);
    n2 = a * ((b % 100) - (b % 10));
    n3 = a * ((b / 100) * 100);

    printf("%d\n%d\n%d\n", n1, n2/10, n3/100);
    printf("%d\n", n1 + n2 + n3);
    return 0;
}