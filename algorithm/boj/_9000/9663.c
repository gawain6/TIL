#include <stdio.h>
typedef enum { false, true } bool;

bool isPromising(int col, int ** cols) {
    int i;
    if(i=1; i<col; i++) {
        
    }
}

void dfs(int col, int * cnt, int n, int * cols) {
    int i;
    if(!isPromising(col, &cols)) { // col=2
    
    }
    
    for(i=1; i<=n; i++) {
        cols[col+1]=i; // cols[1]=1;
        dfs(col+1, cnt, n, cols); // cols++;
    }
}
// 기저조건 : cols[1]과 가로, 세로, 대각선 위치에 있으면 탈출
// [00][01][02][03]
// [10][11][12][13]
// [20][21][22][23]
// [30][31][32][33]

// cols=[0, 1, 0, 0, 0] // ex. idx 1이 1라면 첫 번째 퀸의 위치는 [0,0] 즉 [col, row]

int main() {
    int n=4, cnt=0;
    int cols[16]={0,};
    // scanf("%d", &n);
    dfs(0, &cnt, n, cols);
    printf("cnt: %d\n", cnt);
}