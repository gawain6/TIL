#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 고민한점
// 1. 입력받은 문자열을 포인터 배열에 저장하는 방식
// 2. 중복되는 문자열의 개수를 세는 방식
// 어떻게 해결?
// 1. 포인터 배열에 멀록을 이용해 메로리를 할당 후 이 곳에 문자열을 저장
// 2. 2중 for문으로 배열을 돌면서 중복이 있을 때마다 카운트를 하고
// 2. 이전 카운트 된 것과 현재 카운트 된 것을 비교해서 큰 것의 인덱스를 저장.
// 틀린 이유?
// 사전순 비교를 할 때 문자가 틀릴 때 까지 비교해야 하는데 첫 문자만 비교를 해서 틀림.
int main() {
    int n, i, j, k, idx, bCnt=0, cnt;
    char * bestSeller[1000];
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        bestSeller[i]=(char*) malloc(50);
        scanf("%s", bestSeller[i]);
    }
    for(i=0; i<n; i++) {
        cnt=0;
        for(j=0; j<n; j++) {
            if(!strcmp(bestSeller[i], bestSeller[j])) cnt++;
        }
        if(bCnt<cnt) {
            idx=i;
            bCnt=cnt;
        } else if(cnt!=0&&bCnt==cnt) {
            for(k=0; k<50; k++) {
                if(bestSeller[idx][k]!=bestSeller[i][k]) {
                    idx=bestSeller[idx][k]<bestSeller[i][k] ? idx:i;
                    break;
                }
            }
        }
    }
    printf("%s\n", bestSeller[idx]);
    return 0;
}