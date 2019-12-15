#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = acos(-1.0);
    int r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << pi*(r*r) << endl;
    cout << (double)(2*r*r) << endl;
}