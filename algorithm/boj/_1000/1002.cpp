#include <iostream>
using namespace std;

int main() {
    int t, x1, y1, r1, x2, y2, r2, d1, d2, d3;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d1 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        d2 = (r1+r2)*(r1+r2);
        d3 = (r1-r2)*(r1-r2);
        
        if(d1==0 & d3==0) cout << -1 << endl; // 두 원이 일치할 때
        else if(d1==d2 | d1==d3) cout << 1 << endl; // 두 원이 외접 또는 내접할 때
        else if(d1>d2 | d1<d3) cout << 0 << endl; // 두 원이 접하지 않을 때
        else cout << 2 << endl;
    }
    return 0;
}