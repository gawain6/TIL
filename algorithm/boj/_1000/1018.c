#include <stdio.h>

char s1[]={"WBWBWBWB"};
char s2[]={"BWBWBWBW"};

int main() {
    int n, m, i, j, k, l, p, q, temp, tempRes=0, res=0;
    int point[8]={0,};
    scanf("%d %d", &n, &m);
    char s[n][m];
    for(i=0; i<n; i++) {
        scanf("%s", s[i]);
    }
    for(i=0; i<=n-8; i++) { 
        for(j=0; j<=m-8; j++) {
            for(k=i; k<i+8; k++) {
                temp=0;
                for(l=j; l<j+8; l++) {
                    int cnt1=0, cnt2=0;
                    for(p=l, q=0; p<l+8; p++, q++) {
                        if(s[k][p]!=s1[q]) cnt1++;
                        if(s[k][p]!=s2[q]) cnt2++;
                    }
                    if(l!=0) temp=cnt1>cnt2 ? (cnt2>temp ? temp:cnt2):(cnt1>temp ? temp:cnt1);
                    else if(l==0) temp=cnt1>cnt2 ? cnt2:cnt1;
                }
                if(k<8) point[k]=temp;
                else if(k>=8&point[k%8]>temp) point[k%8]=temp; 
            }
            if(i==0&j==0) {
                for(i=0; i<8; i++) {
                    res+=point[i];
                }
            } else {
                tempRes=0;
                for(i=0; i<8; i++) {
                    tempRes+=point[i];
                }
                if(tempRes<res) res=tempRes;
            }
        }
    }
    // for(i=0; i<n; i++) {
    //     temp=0;
    //     for(j=0; j<=m-8; j++) {
    //         int cnt1=0, cnt2=0;
    //         for(k=j, l=0; k<j+8; k++, l++) {
    //             if(s[i][k]!=s1[l]) cnt1++;
    //             if(s[i][k]!=s2[l]) cnt2++;
    //         }
    //         if(j!=0) temp=cnt1>cnt2 ? (cnt2>temp ? temp:cnt2):(cnt1>temp ? temp:cnt1);
    //         else if(j==0) temp=cnt1>cnt2 ? cnt2:cnt1;
    //     }
    //     if(i<8) point[i]=temp;
    //     else if(i>=8&point[i%8]>temp) point[i%8]=temp; 
    // }
    // for(i=0; i<8; i++) {
    //     res+=point[i];
    // }
    printf("%d\n", res);
    return 0;
}

// BBBBB BWBWBWBW 1
// BBBBB WBWBWBWB 2
// BBBBB BWBWBWBW 1
// BBBBB WBWBWBWB 2
// BBBBB BWBWBWBW 1
// BBBBB WBWBWBWB 2
// BBBBB BWBWBWBW 1
// BBBBB WBWBWBWB 2

// WWWWW WBWBWBWB 2
// WWWWW WBWBWBWB 2