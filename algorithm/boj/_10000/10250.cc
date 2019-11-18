#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    int t, h, w, n, front;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> h >> w >> n;
        if(h==1) front = 1;
        else if(n%h==0) front = h;
        else front = n%h;
        cout << front << setfill('0') << setw(2) << (int)ceil((double)n/(double)h) << endl;
    }
}