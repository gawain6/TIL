#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001];
    int cnt = 0;
    
    scanf("%[^\n]s", s);
    for(int i=0; i<strlen(s); i++) {
        if(s[0]==' '&s[1]=='\0') cnt--;
        if(i!=0&s[i]==' ') cnt++;
        else if(s[i+1]=='\0') cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}