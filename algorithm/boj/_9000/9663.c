#include <stdio.h>
#include <stdlib.h>
typedef enum { false, true } bool;

bool isPromising(int col, int ** cols) { // col=0,1는 true가 나와야함
    // col=3
    int i;
    for(i=1; i<col; i++) {
        if(cols[i]==cols[col]) return false; // 같은 열에 위치하면 false
        // cols[1]==cols[3]
        else if(cols[i]==cols[col]-cols[i]) return false; // 대각선에 위치하면 false
        // cols[2]==cols[3]-cols[2] => 3==2-3
        // cols[i]==cols[col-(i-1)] =>
    }
    return true;
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
// 기저조건 : cols[1]과 가로, 세로, 대각선 위치에 있으면 탈출
// [10]까지는 for문을 돌려야 함 그래야 [10] 이 후 [11],[12],[13]을 체크할 수 있음
// [00][01][02][03]
// [10][11][12][13]
// [20][21][22][23]
// [30][31][32][33]

// cols=[0, 1, 3, 2, 0] // ex. idx 1이 1라면 첫 번째 퀸의 위치는 [0,0] 즉 [col, row]

// n1=dfs(col=0) i=1 [00]
// n2=dfs(col=1) i=3 [12]
// n3=dfs(col=2) i=2 [21]
// n4=dfs(col=3) ...

int main() {
    int n=4, cnt=0;
    int cols[16]={0,};
    // scanf("%d", &n);
    dfs(0, &cnt, n, cols);
    printf("cnt: %d\n", cnt);
}