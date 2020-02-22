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
        if(!visit[i+1]&&(node==0||numbers[node-1]<i+1)) {
            visit[i+1]=true;
            numbers[node]=i+1;
            dfs(node+1, n, m, visit, numbers);
            if(node!=0) visit[i+1]=false;
        }
    }
    return;
}

int main() {
    int n, m;
    bool visit[9]={0,};
    int numbers[8];
    scanf("%d %d", &n, &m);
    dfs(0, n, m, visit, numbers);
}