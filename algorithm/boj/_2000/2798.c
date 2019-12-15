#include <stdio.h>

int main() {
    int n, m, i, j, k, temp=0, sum=0;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n-2; i++) {
        for(j=i+1; j<n-1; j++) {
            for(k=j+1; k<n; k++) {
                temp=arr[i]+arr[j]+arr[k];
                if(temp==m) {sum=temp; break;}
                else if(temp>sum&temp<m) sum=temp;
            }
            if(temp==m) {sum=temp; break;}
        }
        if(temp==m) {sum=temp; break;}
    }
    printf("%d\n", sum);
    return 0;
}