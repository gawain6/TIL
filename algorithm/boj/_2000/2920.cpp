#include <iostream>
using namespace std;

int main() {
    int n, i, s;
    for(i=1; i<=8; i++) {
        cin >> n;
        if(s==1&n!=i) break;
        else if(s==8&n!=9-i) break;
        else if(i==1) s=n;
    }
    if(i!=9) cout << "mixed\n";
    else if(i==9&n==8) cout << "ascending\n";
    else cout << "descending\n";
}