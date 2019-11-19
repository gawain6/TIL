#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool find(char* arr, char ch) {
    bool ret = false;
    for(int i=0; i<strlen(arr); i++) {
        if(arr[i] == ch) {
            ret = true;
            break;
        };
    }
    return ret;
}

void append(char *dst, char ch) {
    char *p = dst;
    while(*p!='\0') p++;
    *p = ch;
    *(p+1) = '\0';
}

int main() {
    int n;
    int ret = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        char s[101] = {};
        char check[27] = {};
        char prev = ' ';
        scanf("%s", s);
        for(int j=0; j<strlen(s); j++) { // happy
            if(!find(check, s[j])) {
                append(check, s[j]);
            }
            else if(find(check, s[j])&(prev!=s[j])) {
                ret--; break;
            }
            prev = s[j];
        }
        ret++;
    }
    printf("%d\n", ret);
}