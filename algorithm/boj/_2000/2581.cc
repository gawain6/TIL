#include <iostream>

using namespace std;
int main() {
    int m, n, i, j, prime_number;
    int prime_sum = 0;
    int prime_min = 10000;
    cin >> m;
    cin >> n;
    for(i=m; i<n+1; i++) {
        if(i==1) continue;
        prime_number = i;
        for(j=2; j<i; j++) {
            if(i%j==0) {
                prime_number = 0;
                break;
            }
        }
        prime_sum += prime_number;
        if(prime_number!=0 & prime_min>prime_number) prime_min = i;
    }
    if(prime_sum==0) cout << -1 << endl;
    else cout << prime_sum << endl << prime_min << endl;
}