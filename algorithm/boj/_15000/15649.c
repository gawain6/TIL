#include <stdio.h>
typedef enum { false, true } bool;

void dfs(int node, int n, int m, bool * visit, int * numbers) {
    int i;
    if(node==m) {
        for(i=0; i<m; i++) printf("%d ", numbers[i]);
        printf("\n");
        return;
    }
    for(i=0; i<n; i++) {
        if(!visit[i+1]) {
            visit[i+1]=true;
            numbers[node]=i+1;
            dfs(node+1, n, m, visit, numbers);
            visit[i+1]=false;
        }
    }
    return;
}
// print = [1, 2, 1, 3, 1, 4, 2, 1, 2, 3, 2, 4]

// visit={0, false, false, false, false}
// numbers=[2, 4]
// node=0, i=2
// n1=dfs(1, 2, 4)
// node=1, i=
// n2=dfs(2, 2, 4)


int main() {
    int n, m;
    bool visit[9]={0,}; // 방문한 노드인지 확인하는 배열
    int numbers[8]; // 이번에 출력할 수열이 들어있는 배열
    scanf("%d %d",&n, &m); // n=4; m=2;
    dfs(0, n, m, visit, numbers);
}