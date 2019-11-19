#include <iostream>

using namespace std;
int main() {
    int n1, n2;
    cin >> n1;
    cin >> n2;
    cout << n1*(n2%10) << endl;
    cout << n1*((n2/10)%10) << endl;
    cout << n1*(n2/100) << endl;
    cout << n1*n2 << endl;
}