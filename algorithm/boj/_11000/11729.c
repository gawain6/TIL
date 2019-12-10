#include <stdio.h>

void hanoi(int n, int from, int by, int to) {
    if(n==1) {
        printf("%d %d\n", from, to);
        return;
    }
    hanoi(n-1, from, to, by);
    printf("%d %d\n", from, to);
    hanoi(n-1, by, from, to);
}

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=1, j=0; j<n; i*=2, j++) {
        cnt+=i;
    }
    
    printf("%d\n", cnt);
    hanoi(n, 1, 2, 3);
}