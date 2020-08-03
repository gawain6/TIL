#include <iostream>

/*
 * 1. n을 입력받는다.
 * 2. for문으로 1부터 n까지 한 줄씩 숫자를 출력한다.
 */

int main(void) {
    int n;

    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}