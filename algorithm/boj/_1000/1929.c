#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void getPrime(int n, int m) { // 3 16
    bool *isPrimeArr = (bool*)malloc(m+1);
    
    for(int i=2; i<=m; i++) isPrimeArr[i] = true;
    for(int i=2; i<=m; i++) { // isPrimeArr = [0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0]
        if(isPrimeArr[i]) { // i=6
            if(i>=n) printf("%d\n", i);
            for(int j=i+i; j<=m; j+=i) isPrimeArr[j] = false;
        }
    }
    free(isPrimeArr);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    getPrime(n, m);
    return 0;
}