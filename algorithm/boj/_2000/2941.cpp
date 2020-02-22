#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int i, cnt=0;
    char s[100];
    cin >> s;
    for(i=0; i<strlen(s); i++) {
        if((i<99)&&
        ((s[i]=='c'&&(s[i+1]=='='||s[i+1]=='-'))||
        (s[i]=='d'&&s[i+1]=='-')||
        (s[i]=='l'&&s[i+1]=='j')||
        (s[i]=='n'&&s[i+1]=='j')||
        (s[i]=='s'&&s[i+1]=='=')||
        (s[i]=='z'&&s[i+1]=='='))) {
            i+=1;
        }
        else if((i<98)&&(s[i]=='d'&&s[i+1]=='z'&&s[i+2]=='=')) {
            i+=2;
        }
        cnt++;
    }
    cout << cnt << '\n';
}