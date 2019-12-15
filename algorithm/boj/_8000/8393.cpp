#include <iostream>
using namespace std;

int main() {
    int n, ret=0;
    cin >> n;
    for(int i=1; i<=n; i++) {
        ret+=i;
    }
    cout << ret << endl;
}