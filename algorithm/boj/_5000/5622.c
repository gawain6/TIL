#include <stdio.h>
#include <string.h>

int main() {
    char s[16];
    int ret = 0;
    scanf("%s", s);
    
    for(int i=0; i<strlen(s); i++) {
        if(s[i]<=67) ret += 3;
        else if(s[i]<=70) ret += 4;
        else if(s[i]<=73) ret += 5;
        else if(s[i]<=76) ret += 6;
        else if(s[i]<=79) ret += 7;
        else if(s[i]<=83) ret += 8;
        else if(s[i]<=86) ret += 9;
        else if(s[i]<=90) ret += 10;
    }
    printf("%d\n", ret);
    return 0;
}