#include <stdio.h>

int d(int n);

int main() {
    int arr[10001] = { 1 };
    
    for(int i=0; i<10001; i++)
        arr[i] = 1;
    
    for(int i=0; i<10001; i++) {
        int n = d(i);
        if(n<10001)
            arr[n] = 0;
    }
    for(int i=1; i<10001; i++) {
        if(arr[i]==1)
            printf("%d\n", i);
    }
    return 0;
}

int d(int n) {
    int dn = n;
    while(n!=0) {
        dn += n%10;
        n /= 10;
    }
    return dn;
}