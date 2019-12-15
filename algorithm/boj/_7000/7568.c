#include <stdio.h>

int main() {
    int n, i, j, grade;
    scanf("%d", &n);
    int weight[n];
    int height[n];
    for(i=0; i<n; i++) {
        scanf("%d %d", &weight[i], &height[i]);
    }
    for(i=0; i<n; i++) {
        grade=1;
        for(j=0; j<n; j++) {
            if((i!=j)&(weight[i]<weight[j]&height[i]<height[j])) {
                grade++;
            }
        }
        printf("%d ", grade);
    }
    printf("\n");
    return 0;
}