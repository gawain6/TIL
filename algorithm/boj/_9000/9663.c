#include <stdio.h>
#include <stdlib.h>
typedef enum { false, true } bool;

bool isPromising(int col, int * cols) { // col=0,1는 true가 나와야함
    int i, distance;
    for(i=1; i<col; i++) {
        distance=abs(cols[i]-cols[col]);
        if(cols[i]==cols[col]) return false; // 같은 열에 위치하면 false
        else if(i==col-distance && cols[i]==(cols[i]>cols[col]? cols[col]+distance:cols[col]-distance)) return false; // 대각선에 위치하면 false
    }
    // cols=[0, 1, 4, 2, 4], i=1, dis=3
    return true;
}
void dfs(int col, int * cnt, int n, int * cols) {
    int i;
    if(!isPromising(col, cols)) return;
    else if(col==n) {
        (*cnt)++;
        return;
    }
    for(i=1; i<=n; i++) {
        cols[col+1]=i;
        dfs(col+1, cnt, n, cols);
    }
}
// cols=[0, 2, 4, 1, 3] // ex. idx 1이 1라면 첫 번째 퀸의 위치는 [0,0] 즉 [col, row]
// [00][01][02][03]   [11][12][13][14]   [t][1][t][t]
// [10][11][12][13]   [21][22][23][24]   [t][t][t][2]
// [20][21][22][23]   [31][32][33][34]   [3][t][t][t]
// [30][31][32][33]   [41][42][43][44]   [t][t][4][t]

// n1=dfs(col=0) i=2 [01]
// n2=dfs(col=1) i=4 [13]
// n3=dfs(col=2) i=1 [20]
// n4=dfs(col=3) i=3 [32]
// n5=dfs(col=4) ...

int main() {
    int n, cnt=0, cols[16]={0,};
    scanf("%d", &n);
    dfs(0, &cnt, n, cols);
    printf("%d\n", cnt);
}