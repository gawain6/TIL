#include <stdio.h>

int main() {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    if((a-b)*((v-a)/(a-b))+a==v) printf("%d\n", (v-a)/(a-b)+1);
    else printf("%d\n", (v-a)/(a-b)+2);
}