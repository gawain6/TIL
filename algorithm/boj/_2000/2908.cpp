#include <iostream>
using namespace std;

int main() {
    char temp;
    string a, b;
    cin >> a >> b;
    
    temp=a[0]; a[0]=a[2]; a[2]=temp;
    temp=b[0]; b[0]=b[2]; b[2]=temp;
    
    if(a>b) cout << a << '\n';
    else if(a<b) cout << b << '\n';
}