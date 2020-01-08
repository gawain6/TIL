#include <stdio.h>

void dfs(int n, char (*sudoku)[9]) {
    int i;
    for(i=0; i<9; i++) {
        printf("%c", sudoku[0][i]);
    }
}

int main() {
    int i;
    char sudoku[9][9]={0,};
    for(i=0; i<1; i++) {
        scanf("%s", sudoku[i]);
    }
    printf("%c", sudoku[0][8]);
}

// 0 3 5 4 6 9 2 7 8 => 1
// 7 8 2 1 0 5 6 0 9 => 3, 4
// 0 6 0 2 7 8 1 3 5 => 4, 9
// 3 2 1 0 4 6 8 9 7
// 8 0 4 9 1 3 5 0 6
// 5 9 6 8 2 0 4 1 3
// 9 1 7 6 5 2 0 8 0
// 6 0 3 7 0 1 9 5 2
// 2 5 8 3 9 4 7 6 0

// 가로, 네모, 세로 순으로 확인