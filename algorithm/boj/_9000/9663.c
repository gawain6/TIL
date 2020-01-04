#include <stdio.h>
#include <stdlib.h>
typedef enum { false, true } bool;

bool isPromising(int col, int ** cols) { // col=0,1는 true가 나와야함
    // col=3
    int i, j;
    for(i=1; i<col; i++) {
        if(cols[i]==cols[col]) return false; // 같은 열에 위치하면 false
        // cols[1]==cols[3]
        else { // 대각선에 위치하면 false
            for(j=1; j<=abs(cols[i]-cols[col]); j++) {
                if(i==col-j && cols[i]==cols[i]>cols[col]? cols[col]+j:cols[col]-j) return false;
            }
        }
    }
    return true;
    // cols=[0, 1, 3, 4, 0], i=1, j=1 (j<=?)
    // 
}

void dfs(int col, int * cnt, int n, int * cols) {
    int i;
    if(!isPromising(col, &cols)) { // col=2
        return;
    }
    
    for(i=1; i<=n; i++) {
        cols[col+1]=i; // cols[1]=1;
        dfs(col+1, cnt, n, cols); // col++;
    }
}
// cols=[0, 1, 3, 4, 0] // ex. idx 1이 1라면 첫 번째 퀸의 위치는 [0,0] 즉 [col, row]
// [00][01][02][03]   [11][12][13][14]
// [10][11][12][13]   [21][22][23][24]
// [20][21][22][23]   [31][32][33][34]
// [30][31][32][33]   [41][42][43][44]

// n1=dfs(col=0) i=1 [00]
// n2=dfs(col=1) i=3 [12]
// n3=dfs(col=2) i=4 [23]
// n4=dfs(col=3) ...

int main() {
    int n=4, cnt=0;
    int cols[16]={0,};
    // scanf("%d", &n);
    dfs(0, &cnt, n, cols);
    printf("cnt: %d\n", cnt);
}