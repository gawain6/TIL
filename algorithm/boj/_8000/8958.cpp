#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, i, j, point, res;
    char temp;
    cin >> n;
    char s[n];
    for(i=0; i<n; i++) {
        cin >> s;
        res=0;
        temp='X';
        for(j=0; j<strlen(s); j++) {
            if(temp=='X') point=0;
            if(s[j]=='O') {
                point++;
                res+=point;
            }
            temp=s[j];
        }
        cout << res << '\n';
    }
}