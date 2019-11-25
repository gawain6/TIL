#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void GetPrime(int n, int m) { // 3 16
    int cnt = 0;
    bool *isPrimeArr = (bool*)malloc(m+1);
                                                  //  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6
    for(int i=2; i<=m; i++) isPrimeArr[i] = true; // [0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0]
    for(int i=2; i<=m; i++) { // 2~16, i=13
        if(isPrimeArr[i]) {
            if(i>n) cnt++; // 13>3 >> cnt=4
            for(int j=i+i; j<=m; j+=i) isPrimeArr[j] = false; // j=22; j<=16; j=22+11 >> 
        }
    }
    free(isPrimeArr);
    printf("%d\n", cnt);
}

int main() {
    while(true) {
        int n;
        scanf("%d", &n);
        if(n==0) break;
        GetPrime(n, n*2);
    }
    return 0;
}