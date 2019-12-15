#include <iostream>

using namespace std;

void getPrime(int n, int m) {
    bool* isPrimeArr = new bool[m+1];
    
    for(int i=2; i<=m; i++) isPrimeArr[i] = true;
    for(int i=2; i<=m; i++) {
        if(isPrimeArr[i]) {
            if(i>=n) printf("%d\n", i);
            for(int j=i+i; j<=m; j+=i) isPrimeArr[j] = false;
        }
    }
    free(isPrimeArr);
}

int main() {
    int n, m;
    cin >> n >> m;
    getPrime(n, m);
    return 0;
}