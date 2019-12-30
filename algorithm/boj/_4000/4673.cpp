#include <stdio.h>

int selfNumber(int n) {
    int x=1, temp=x, k=0;
    
    while(n>x) {
        if(temp==0) { 
            if(k+x==n) return 0;
            x++;
            temp=x;
            k=0;
        }
        k+=temp%10;
        temp/=10;
    }
    return 1;
}

// n이 1부터 10000까지 돌 동안 셀프넘버를 찾는다
// n이 n 보다 작은 정수 x와 x의 각 자리의 숫자끼리 더한 수를 k라고 했을 때 x+k가 x가 되면 x는 셀프넘버가 아니다
// x를 1부터 n보다 작은 수까지 돌면서 n이 셀프넘버인지 검사한다.
// 검사 방법은 x+k==n이 되면 셀프넘버가 아니니 검사를 종료한다.

int main() {
    int n=1;
    while(n<=10000) {
        int num=selfNumber(n);
        if(num==1) printf("%d ", n);
        n++;
    }
}