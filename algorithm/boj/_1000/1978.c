#include <stdio.h>

int main() {
    int n, u, i, j, cnt = 0;
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        scanf("%d", &u);
        if(u==1) continue;
        for(j=2; j<u; j++) {
            if(u%j==0) {
                cnt--;
                break;
            }
        }
        cnt++;
    }
    printf("%d\n", cnt);
}