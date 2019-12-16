#include <stdio.h>

// void func1(int * _idx, char * _row, int size, char c) {
//     if(c=='B') c='W';
//     else if(c=='W') c='B';
//     for(int j=1; j<size; j++) {
//         if(_row[j]==c) {
//             *_idx=j;
//             break;
//         }
//     }
// }

// // BBBBWWWW

// int main() {
//     int idx, cnt=0, n, m;
//     scanf("%d %d", &n, &m);
//     char row[m];
//     for(int i=0; i<n; i++) {
//         scanf("%s", row);
        
//         for(int i=0; i<m; i++) {
//             if(row[0]=='B') func1(&idx, row, m, 'B');
//             else if(row[0]=='W') func1(&idx, row, m, 'W');
//         }
//         if(idx%2!=0) {
//             for(int i=0; i<m; i++) {
//                 if((row[0]=='B')&(i%2!=0)&(row[i]!='W')) cnt++;
//                 else if((row[0]=='W')&(i%2!=0)&(row[i]!='B')) cnt++;
//             }
//         } else {
//             for(int i=0; i<m; i++) {
//                 if((row[0]=='B')&(i%2==0)&(row[i]!='W')) cnt++;
//                 else if((row[0]=='W')&(i%2==0)&(row[i]!='B')) cnt++;
//             }
//         }
//     }
//     printf("%d\n", cnt);
//     return 0;
// }

int main() {
    int i, j, k, cur, idx, n=2, m=13, cnt=0;
    char c;
    char row[13]="BBBBBBBBWBWBW";
    for(i=0; i<=m-8; i++) {
        cur=0;
        idx=0;
        for(j=i; j<i+8; j++) {
            if(j==i) { // 바꿔야할 문자의 인덱스 홀짝 위치 찾기
                c=row[j];
                for(k=i; k<i+8; k++) {
                    if(c!='W'&row[k]=='W') {
                        idx=k;
                        c='W';
                        break;
                    } else if(c!='B'&row[k]=='B') {
                        idx=k;
                        c='B';
                        break;
                    }
                }
            }
            if(idx==0) {
                if(j%2!=0) cur++;
            } else if(idx%2!=0) {
                if((j%2!=0)&(row[j]!=c)) cur++; 
            } else if(idx%2==0) {
                if((j%2==0)&(row[j]!=c)) cur++;
            }
        }
        if(i==0) cnt=cur;
        else if(cnt>cur) cnt=cur;
    }
    printf("%d", cnt);
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