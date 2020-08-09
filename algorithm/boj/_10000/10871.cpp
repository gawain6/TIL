#include <iostream>

/*
 * 1. 첫 째 줄에 수열의 개수 N과 X를 입력받는다.
 * 2. N 크기의 동적 배열을 생성한다.
 * 3. for문으로 두번 째 줄에는 N개의 수열을 입력 후 동적 배열에 저장한다.
 * 4. for문으로 N개의 수열 중 X보다 작은 수를 출력한다.
 */

int main(void) {
    int N, X, i;
    int *progression;

    scanf("%d %d", &N, &X);
    progression = new int[N];
    for(i=0; i<N; i++) {
        scanf("%d", &progression[i]);
    }
    for(i=0; i<N; i++) {
        if(progression[i] < X) printf("%d ", progression[i]);
    }
    return 0;
}