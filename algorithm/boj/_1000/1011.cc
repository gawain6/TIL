#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int t, x, y, r;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin>> x >> y;
        r = floor(sqrt(y-x)+0.5);
        if(y-x <= pow(r, 2)) cout << r*2-1 << endl;
        else cout << r*2 << endl;
    }
}