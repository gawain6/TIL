#include <stdio.h>
#include <string.h>

int main() {
    const int size=1000000;
    int n, i, j, sum;
    scanf("%d", &n);
    char s1[size];
    for(i=1; i<=size; i++) {
        sprintf(s1, "%d", i);
        sum=0;
        for(j=0; j<strlen(s1); j++) {
            sum+=(int)s1[j]-48;
        }
        if(n==i+sum) break;
    }
    if(i>size) printf("0\n");
    else printf("%d\n", i);
}