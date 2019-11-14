#include <stdio.h>

int main() {
    int n1;
    int n2 = 1;
    scanf("%d", &n1);
    for(int i=0; i<20000; i++) {
        n2 += i*6;
        if(n1<=n2) {
            printf("%d\n", i+1);
            break;
        }
    }
}