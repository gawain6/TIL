#include <iostream>
using namespace std;

int main() {
    string s;
    int alphabet[26];
    fill_n(alphabet, 26, -1);
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(alphabet[s[i]-97]==-1) alphabet[s[i]-97]=i;
    }
    for(int i=0; i<sizeof(alphabet)/sizeof(int); i++) {
        printf("%d ", alphabet[i]);
    } printf("\n");
}