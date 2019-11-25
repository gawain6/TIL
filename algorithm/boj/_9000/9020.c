#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LIMIT 10

void GetPrime(int* isPrime) {
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<LIMIT; i++) isPrime[i] = true;
    for(int i=2; i<LIMIT; i++) {
        if(isPrime[i]) {
            for(int j=i+i; j<LIMIT; j+=i) isPrime[j] = false;
        }
    }
    printf("\n");
}

void Goldbach(int n, int* is_prime) {
    for(int i=n/2; i<n+1; i++) {
        if(is_prime[i] & is_prime[n-i]) {
            printf("%d %d\n", n-i, i);
            break;
        }
    }
}

int main() {
    int t;
    int isPrime[LIMIT];
    
    GetPrime(isPrime);
    for(int i=0; i<LIMIT; i++) {
        printf("%d ", isPrime[i]);
    }
    // scanf("%d", &t);
    // for(int i=0; i<t; i++) {
    //     int n;
    //     scanf("%d", &n);
    //     Goldbach(n, is_prime);
    // }
    return 0;
}