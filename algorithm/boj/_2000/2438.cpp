#include <iostream>

/*
 * 1. 첫 줄에 정수 N을 입력받는다.
 * 2. for문으로 N개의 줄 만큼 *를 출력한다. 단, N번 째 줄에는 N개의 *을 출력한다.
 * 3-1. 2중 for문으로 구성한다.
 * 3-2. 바깥 쪽 for문은 i=1 부터 N까지 줄을 카운터한다.
 * 3-3. 안 쪽 for문은 j=0부터 시작해서 i값과 같아지기 전까지 한 줄에 *를 반복 출력한다.
 * 3-4. j==i 가 되면 안 쪽 for문을 종료하고, 개행문자를 출력한다.
 */

int main(void) {
    int N, i, j;

    scanf("%d", &N);
    for(i=1; i<=N; i++) {
        for(j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}