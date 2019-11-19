#include <stdio.h>
#include <string.h>

int main() {
    char s[102];
    int ret = 0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++) {
        if((s[i]=='c'&s[i+1]=='=')|
            (s[i]=='c'&s[i+1]=='-')|
            (s[i]=='d'&s[i+1]=='-')|
            (s[i]=='l'&s[i+1]=='j')|
            (s[i]=='n'&s[i+1]=='j')|
            (s[i]=='s'&s[i+1]=='=')|
            (s[i]=='z'&s[i+1]=='=')) i++;
        else if(s[i]=='d'&s[i+1]=='z'&s[i+2]=='=') i+=2;
        ret++;
    }
    printf("%d\n", ret);
    return 0;
}