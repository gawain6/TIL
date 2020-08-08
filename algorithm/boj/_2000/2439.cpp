#include <iostream>

/*
 * 1. *을 몇 줄을 출력할 것인지를 첫 줄에서 N을 입력받는다.
 * 2. for문을 이용해서 *을 우측정렬로 출력한다.
 * 3. 바깥쪽 for문은 i값이 1 부터 N까지 반복한다.
 * 4. 안쪽 for문1은 j값이 0 부터 N-i까지 한 줄에 공백 출력을 반복한다.
 * 5. 안쪽 for문2는 l값이 j 부터 N과 같기 전까지 * 출력을 반복한다.
 * 6. 안쪽 for문1을 빠져나오면 개행문자를 출력한다.
 */

int main(void) {
    int N, i, j, l;

    scanf("%d", &N);
    for(i=1; i<=N; i++) {
        for(j=0; j<N-i; j++) {
            printf(" ");
        }
        for(l=j; l<N; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}