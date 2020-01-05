#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, i, j, cnt=0;
    char s[100];
    cin >> n;
    for(i=0; i<n; i++) {
        bool alphabet[26]={0,};
        cin >> s;
        for(j=0; j<strlen(s); j++) {
            if(!alphabet[s[j]-97]) alphabet[s[j]-97]=1;
            else if(alphabet[s[j]-97]&&s[j-1]!=s[j]) {
                cnt--;
                break;
            }
        }
        cnt++;
    }
    cout << cnt << '\n';
}