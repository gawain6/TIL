#include <iostream>

/*
 * 1. A, B를 입력받고, A+B의 합을 출력을 0, 0이 입력되기 전까지 반복한다.
 * 2. 반복은 while문을 사용한다.
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