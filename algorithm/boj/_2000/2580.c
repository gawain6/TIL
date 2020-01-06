#include <stdio.h>

void dfs(int n, char (*sudoku)[10]) {
    int i;
    for(i=1; i<=9; i++) {
        if(sudoku[n][i]==sudoku[n])
    }
    
    for(i=1; i<=9; i++) {
        sudoku[n+1][i]=i;
        dfs(n, sudoku);
    }
}

int main() {
    int i;
    char sudoku[10][10]={0,};
    for(i=0; i<1; i++) {
        scanf("%s", sudoku[i]);
    }
}