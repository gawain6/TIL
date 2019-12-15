#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LIMIT 10001

void GetPrime(int* isPrime) {
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<LIMIT; i++) isPrime[i] = true;
    for(int i=2; i<LIMIT; i++) {
        if(isPrime[i]) {
            for(int j=i+i; j<LIMIT; j+=i) isPrime[j] = false;
        }
    }
}

void Goldbach(int n, int* isPrime) {
    for(int i=n/2; i<n+1; i++) {
        if(isPrime[i] & isPrime[n-i]) {
            printf("%d %d\n", n-i, i);
            break;
        }
    }
}

int main() {
    int t;
    int isPrime[LIMIT];
    
    GetPrime(isPrime);
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int n;
        scanf("%d", &n);
        Goldbach(n, isPrime);
    }
    return 0;
}