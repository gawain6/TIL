#include <stdio.h>
#include <string.h>

int main() {
    int n, numbering=666, cnt=0;
    scanf("%d", &n);
    while(1) {
        char str[8]; // 숫자를 문자로 변환하여 넣을 배열
        sprintf(str, "%d", numbering); // 숫자를 문자로 변환
        if(strstr(str, "666")!=NULL) cnt++; // 배열에 666이 포함되었으면 cnt 증가
        if(n==cnt) break;
        numbering++; // 넘버링 숫자를 1 증가
    }
    printf("%d\n", numbering);
}