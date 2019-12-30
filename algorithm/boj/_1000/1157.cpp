#include <iostream>
using namespace std;

int main() {
    int i, idx, maxIdx=0;
    bool b;
    string s;
    int alphabet[26]={0,};
    cin >> s;
    for(i=0; i<s.size(); i++) {
        if(s[i]<=90) idx=s[i]-65;
        else if(s[i]>=97) idx=s[i]-97;
        alphabet[idx]++;
        
        if(i==0) maxIdx=idx;
        else if(alphabet[maxIdx]<alphabet[idx]) maxIdx=idx;
    }
    for(i=0; i<26; i++) {
        if(maxIdx!=i&alphabet[i]==alphabet[maxIdx]) {
            printf("?\n");
            break;
        }
    }
    if(i==26) printf("%c\n", maxIdx+65);
}