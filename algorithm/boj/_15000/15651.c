#include <stdio.h>
typedef enum { false, true } bool;

void dfs(int node, int n, int m, int * numbers, bool * visit) {
    int i;
    if(node==m) {
        for(i=0; i<m; i++) printf("%d ", numbers[i]);
        printf("\n");
        return;
    }
    for(i=0; i<n; i++) {
        if(!visit[i]) {
            visit[i+1]=true;
            numbers[node]=i+1;
            dfs(node+1, n, m, numbers, visit);
            visit[i+1]=false;
        }
    }
    return;
}

// printf=[1, 1, 1, 2]

// visit={0, false, false, 0, 0}
// numbers=[1, 2]
// n1=dfs(0, 4, 2)
// node=0, i=0
// n2=dfs(1, 4, 2)
// node=1, i=1
// n3=dfs(2, 4, 2)

int main() {
    int n, m;
    int numbers[8];
    bool visit[9]={0,};
    scanf("%d %d", &n, &m);
    dfs(0, n, m, numbers, visit);
}