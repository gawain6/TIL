#include <iostream>
#include <string.h>
using namespace std;

int main() {
    bool check=false; // 알파벳이면 true, 공백이면 false
    int i, cnt=0;
    char s[1000000];
    cin.getline(s, 1000000);
    
    for(i=0; i<strlen(s); i++) {
        if(check==false&&s[i]>=65) {
            cnt++;
            check=true;
        } else if(check==true&&s[i]==32) {
            check=false;
        }
    }
    cout << cnt << '\n';
}