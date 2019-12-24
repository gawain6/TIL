#include <iostream>
using namespace std;

int main() {
    int n, i, res=0;
    string num;
    cin >> n >> num;
    for(i=0; i<n; i++) { res+=(int)num[i]-48; }
    cout << res << '\n';
}