#include <stdio.h>

int main() {
    int t, r;
    char s[21];
    
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d %s", &r, s);
        for(int j=0; j<sizeof(s)/sizeof(char); j++) {
            if(s[j]=='\0')
                break;
            for(int k=0; k<r; k++)
                printf("%c", s[j]);
        }
        printf("\n");
    }
    return 0;
}