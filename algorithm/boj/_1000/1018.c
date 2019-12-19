#include <stdio.h>

char * chess[][2] = {"WBWBWBWB", "BWBWBWBW",
                    "BWBWBWBW", "WBWBWBWB",
                    "WBWBWBWB", "BWBWBWBW",
                    "BWBWBWBW", "WBWBWBWB",
                    "WBWBWBWB", "BWBWBWBW",
                    "BWBWBWBW", "WBWBWBWB",
                    "WBWBWBWB", "BWBWBWBW",
                    "BWBWBWBW", "WBWBWBWB"};

int main() {
    int n, m, i, j, k, l, p, q, res;
    scanf("%d %d", &n, &m);
    char s[n][m];
    for(i=0; i<n; i++) {
        scanf("%s", s[i]);
    }
    for(i=0; i<=n-8; i++) { // 세로
        for(j=0; j<=m-8; j++) { // 가로
            int point[8]={0,};
            
            int sum1=0, sum2=0;
            for(k=i, q=0; k<i+8; k++, q++) { // 세로 안에 세로
                int cnt1=0, cnt2=0;
                for(l=j, p=0; l<j+8; l++, p++) { // 가로 안에 가로
                    if(s[k][l]!=*&chess[q][0][p]) cnt1++;
                    if(s[k][l]!=*&chess[q][1][p]) cnt2++;
                }
                sum1+=cnt1;
                sum2+=cnt2;
            }
            if(i!=0|j!=0) res=sum1<sum2 ? (sum1<res ? sum1:res):(sum2<res ? sum2:res);
            else if(i==0&j==0) res=sum1<sum2 ? sum1:sum2;
        }
    }
    printf("%d\n", res);
    return 0;
}