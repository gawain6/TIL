#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* getPrime(int n);

int main() {
    int n, m;
    int *numPtr;
    scanf("%d %d", &n, &m);
    
    
        
}

int* getPrime(int n) {
    int i, k;
    int *save;
    if(n<2) return -1;
    n++;
    save = malloc(sizeof(int) * (n/2));
    for(i=3; i<(int)pow(n, 0.5)+1; i++) {
        if(save[i/2]) {
            k = i * i;
            save[k/2]
        }
        i++;
    }
}