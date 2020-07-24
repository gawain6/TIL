#include <stdio.h>

/*
 * 1. a, b를 입력 받음
 * 2. b를 자릿수별로 나눔
 * 3. a와 나눈 자릿수별 3개를 곱함
 * 4. 곱한 3개를 출력
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