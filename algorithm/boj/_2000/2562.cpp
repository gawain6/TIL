#include <iostream>
using namespace std;

int main() {
    int n, max, idx;
    for(int i=1; i<10; i++) {
        cin >> n;
        if(i==1 || max<n) {
            max=n;
            idx=i;
        }
    }
    cout << max << '\n' << idx << '\n';
}