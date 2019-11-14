#include <iostream>

using namespace std;
int main() {
    int h, m;
    cin >> h >> m;
    if(m>=45) m = m-45;
    else {
        if(h-1==-1) h=23;
        else h -= 1;
        m += 15;
    }
    cout << h << " " << m << endl;
}