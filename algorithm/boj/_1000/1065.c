#include <stdio.h>

int main() {
    int n;
    int cnt;
    scanf("%d", &n);
    
    if(n<100) {
        printf("%d\n", n);
    } else if(n==1000) {
        printf("144\n");
    } else {
        cnt = 99;
        for(int i=100; i<n+1; i++) {
            if(i/100+i%10 == 2*(i/10%10))
                cnt += 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}