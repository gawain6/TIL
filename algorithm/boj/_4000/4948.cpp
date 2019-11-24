#include <iostream>

using namespace std;

void getPrime(int n, int m) {
    int cnt = 0;
    bool* isPrimeArr = new bool[m+1];
    
    for(int i=2; i<=m; i++) isPrimeArr[i] = true;
    for(int i=2; i<=m; i++) {
        if(isPrimeArr[i]) {
            if(i>n) cnt++;
            for(int j=i+i; j<=m; j+=i) isPrimeArr[j] = false;
        }
    }
    free(isPrimeArr);
    cout << cnt << endl;
}

int main() {
    while(true) {
        int n;
        cin >> n;
        if(n==0) break;
        getPrime(n, n*2);
    }
    return 0;
}