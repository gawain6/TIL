#include <iostream>

/*
 * 1. 첫 줄에 테스트 케이스 T를 입력받는다.
 * 2. for문으로 T만큼 A, B를 입력받고, A+B값을 Case #1: 2 형식으로 출력한다.
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