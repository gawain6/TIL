#include <stdio.h>
typedef enum { false, true } bool;

// [11][12][13][14]  [1][0][0][0]
// [21][22][23][24]  [0][0][2][0]
// [31][32][33][34]  [0][0][0][0]
// [41][42][43][44]  [0][0][0][0]

// cehss = [0, 1, 3, 0, 0]
// n1=dfs(0) i=0
// n2=dfs(1) i=2
// n3=dfs(2) ...
// n4=dfs(3) ...
// n5=dfs(4) ...

bool isPromising(int n, int * _chess) { // 퀸의 위치가 유효하면 true를 반환, 유효하지 않으면 false 반환
    int i;
    for(i=1; i<n; i++) { // 새로운 퀸과 이전 퀸들의 위치를 비교 (n은 새로운 퀸의 위치이므로 n 이전 까지만)
        int distance=n-i; // 새로운 퀸의 행 위치와 이전 퀸의 행 거리 계산
        if(_chess[n]==_chess[i]) return false; // 행 위치 비교
        else if((i==n-distance)&&(_chess[i]==(_chess[i]<_chess[n]?_chess[n]-distance:_chess[n]+distance))) return false; // 대각선 위치 비교
    }
    return true;
}

void dfs(int n, int size, int * cnt, int * _chess) {
    int i;
    if(!isPromising(n, _chess)) return; // 가지치기. 행 idx를 파라미터로 넘김
    else if(n==size) { // 끝 행까지 퀸을 배치했다면 카운트 증가
        (*cnt)++;
        return;
    }
    
    for(i=0; i<size; i++) { // dfs
        _chess[n+1]=i+1;
        dfs(n+1, size, cnt, _chess);
    }
}

int ft_eight_queens_puzzle(void) {
    int cnt=0, chess[9]={0,}; // idx=행 idx, value=열 idx
    dfs(0, 8, &cnt, chess); // 시작 행, 퀸 개수, 경우의 수 카운트, 체스판 배열
    return cnt;
}

// int main() {
//     printf("%d\n", ft_eight_queens_puzzle());
//     return 0;
// }