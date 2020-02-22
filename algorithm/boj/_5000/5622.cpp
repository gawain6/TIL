#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int i, sum=0;
    char s[15];
    cin >> s;
    
    for(i=0; i<strlen(s); i++) {
        if(s[i]<=67) sum+=3;
        else if(s[i]<=70) sum+=4;
        else if(s[i]<=73) sum+=5;
        else if(s[i]<=76) sum+=6;
        else if(s[i]<=79) sum+=7;
        else if(s[i]<=83) sum+=8;
        else if(s[i]<=86) sum+=9;
        else if(s[i]<=90) sum+=10;
    }
    cout << sum << '\n';
}