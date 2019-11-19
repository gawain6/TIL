#include <stdio.h>

int main() {
    int n;
    int ans = -1;
    scanf("%d", &n);
    for(int i=0; i*3<=n; i++) {
        if((n-i*3)%5==0) {
            ans = i+((n-i*3)/5);
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}