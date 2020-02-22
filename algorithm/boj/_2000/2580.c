#include <stdio.h>
typedef enum { false, true } bool;

int sudoku[9][9]={0,}, n, size=9;
bool isBeing[10]={0,}; // 값이 존재하는지 체크. 있으면 true

void dfs(int col, int row) { // 행, 열
    int i;
    
    for(i=1; i<size; i++) {
        if(!sudoku[col][row]) { // 빈 칸이라면
            sudoku[col][row]=n;
        }
        dfs(col, row+1);
    }
}

int main() {
    int i, j;
    for(i=0; i<9; i++) {
        for(j=0; j<9; j++) {
            scanf("%d", sudoku[i][j]);
        }
    }
    dfs(0, 0);
    return 0;
}

// 0 3 5 4 6 9 2 7 8
// 7 8 2 1 0 5 6 0 9
// 0 6 0 2 7 8 1 3 5
// 3 2 1 0 4 6 8 9 7
// 8 0 4 9 1 3 5 0 6
// 5 9 6 8 2 0 4 1 3
// 9 1 7 6 5 2 0 8 0
// 6 0 3 7 0 1 9 5 2
// 2 5 8 3 9 4 7 6 0

// 후보를 스도쿠 위치로 잡는게 아닌 1~9를 후보로 잡음
// 스도쿠를 탐색 -> 빈 칸 발견 -> 1부터 후보를 잡음 -> 가로 또는 세로, 3x3 위치에 1이 존재하는지 백트래킹 검사
// -> 값이 존재하면 다음 후보 숫자로 다시 검사