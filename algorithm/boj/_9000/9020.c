#include <stdio.h>
#define LIMIT 10

void GetPrime(int* is_prime) {
    is_prime[0] = 0, is_prime[1] = 0;
    for(int i=2; i<sizeof(is_prime)/sizeof(int); i++) {
        if(is_prime[i]) {
            for(int j=i+i; j<sizeof(is_prime)/sizeof(int); j+=i)
                is_prime[j] = 0;
        }
    }
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
    int is_prime[LIMIT] = {1,};
    
    for(int i=0; i<sizeof(is_prime)/sizeof(int); i++) {
        printf("%d ", is_prime[i]);
    }
    
    GetPrime(is_prime);
    // scanf("%d", &t);
    // for(int i=0; i<t; i++) {
    //     int n;
    //     scanf("%d", &n);
    //     Goldbach(n, is_prime);
    // }
    return 0;
}