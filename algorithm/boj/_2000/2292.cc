#include <iostream>

using namespace std;
int main() {
    int n1;
    int n2 = 1;
    cin >> n1;
    for(int i=0; i<20000; i++) {
        n2 += i*6;
        if(n1<=n2) {
            cout << i+1 << endl;
            break;
        }
    }
}