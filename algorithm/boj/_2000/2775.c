#include <stdio.h>
#include <string.h>

#define ARR_SIZE 14

int main() {
    int t, k, n, s;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d", &k);
        scanf("%d", &n);
        int prevArr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        int curArr[ARR_SIZE] = {0, };
        
        for(int j=0; j<k; j++) {
            s = 0;
            for(int l=0; l<n; l++) {
                s += prevArr[l];
                curArr[l] = s;
            }
            memcpy(prevArr, curArr, ARR_SIZE*sizeof*prevArr);
        }
        printf("%d\n", curArr[n-1]);
    }
    return 0;
}