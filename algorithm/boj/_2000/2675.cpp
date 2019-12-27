#include <iostream>
using namespace std;

int main() {
    int t, r, i=0, j, k;
    string s;
    cin >> t;
    while(i<t) {
        cin >> r >> s;
        for(j=0; j<s.size(); j++) {
            for(k=0; k<r; k++) {
                printf("%c", s[j]);
            }
        } printf("\n");
        i++;
    }
}