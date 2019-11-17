#include <stdio.h>
#include <math.h>
// math 쓸 땐 -lm 옵션 붙여야함
// cd "/home/named/fastcamp/TIL/algorithm/boj/_1000/" && gcc 1011.c -o 1011 -lm && "/home/named/fastcamp/TIL/algorithm/boj/_1000/"1011

int main() {
    int t, x, y, r;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d %d", &x, &y);
        r = floor(sqrt(y-x)+0.5);
        if(y-x <= pow(r, 2)) printf("%d\n", r*2-1);
        else printf("%d\n", r*2);
    }
    return 0;
}