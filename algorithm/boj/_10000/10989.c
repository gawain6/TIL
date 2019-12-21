#include <stdio.h>

int main() {
    int n, i, a;
    scanf("%d", &n);
    int temp[10001]={0,};
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        temp[a]++;
    }
    for(i=0; i<10001; i++) {
        while(temp[i]!=0) {
            printf("%d\n", i);
            temp[i]--;
        }
    }
}