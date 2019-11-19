#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[1000001];
    int arr[26];
    int max_val = 0;
    int max_idx = 0;

    scanf("%s", s);
    for(int i=0; i<sizeof(s)/sizeof(char); i++) {
        if(s[i]=='\0') break;
        arr[s[i]>=97 ? s[i]-97 : s[i]-65]++;
    }
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        if(arr[i]>max_val) {
            max_val = arr[i];
            max_idx = i;
        } else if(arr[i]==max_val)
            max_idx = -2;
    }
    printf("%c\n", (char)max_idx+65);
}