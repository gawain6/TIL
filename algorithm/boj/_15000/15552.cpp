#include <iostream>

/*
 * 1. 첫 번째 줄에는 테스트 케이스 개수 T를 입력받는다.
 * 2. for문으로 T만큼 정수 A, B를 입력받고, A+B의 합을 출력한다. 
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