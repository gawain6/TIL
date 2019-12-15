#include <iostream>
using namespace std;

int main() {
    const int size=1000000;
    int n, i, j, sum;
    string s1;
    cin >> n;
    for(i=1; i<=size; i++) {
        s1=to_string(i);
        sum=0;
        for(j=0; j<s1.length(); j++) {
            sum+=(int)s1[j]-48;
        }
        if(n==i+sum) break;
    }
    if(i>size) cout << "0\n";
    else cout << i << '\n';
}