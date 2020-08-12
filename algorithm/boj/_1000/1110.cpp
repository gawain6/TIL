#include <iostream>

/*
 * 1. 임의의 숫자 N을 입력받는다.
 * 2. N의 1의 자리수와 10의 자리수를 더한다.
 * 3. N의 1의 자리수를 10의 자리수로, 더해서 나온 값의 1의 자리수를 1의 자리수로 해서 새로운 숫자를 만든다.
 * 4. 새로 만든 값이 N과 같은지 확인하고, 같지 않으면 count한다.
 * 5. N과 같은 값이 나올 때 까지 while문으로 2~4를 반복한다.
 * 6. N과 같은 값이 나오면 count한 값을 출력한다.
 */

int main(void) {
    int N, count=1, sum;
    scanf("%d", &N);
    sum = N;
    while(1) {
        sum = (sum%10)*10 + ((sum%10) + (sum/10))%10;
        if(sum == N) break;
        count++;
    }
    printf("%d", count);
    return 0;
}