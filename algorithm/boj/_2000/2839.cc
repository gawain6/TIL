#include <iostream>

using namespace std;
int main() {
    int n;
    int ans = -1;
    cin >> n;
    for(int i=0; i*3<=n; i++) {
        if((n-i*3)%5==0) {
            ans = i+((n-i*3)/5);
            break;
        }
    }
    cout << ans << endl;
}