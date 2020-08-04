#include <iostream>

/*
 * 1. n을 입력받는다.
 * 2. for문으로 n부터 1까지 한 줄 씩 출력한다.
 */

int main(void) {
    int n;

    scanf("%d", &n);
    for(int i=n; i>0; i--) {
        printf("%d\n", i);
    }
    return 0;
}