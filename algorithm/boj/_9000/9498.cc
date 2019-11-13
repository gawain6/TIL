#include <iostream>

using namespace std;
int main() {
    int n1;
    cin >> n1;
    if(n1>=90) cout << "A" << endl;
    else if(n1>=80) cout << "B" << endl;
    else if(n1>=70) cout << "C" << endl;
    else if(n1>=60) cout << "D" << endl;
    else cout << "F" << endl;
}