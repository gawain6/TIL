#include <stdio.h>
#include <string.h>

int main() {
    int arr[26];
    int n;
    char s[101];
    
    scanf("%s", s);
    memset(arr, -1, sizeof(arr));
    
    for(int i=0; i<sizeof(s)/sizeof(char); i++) {
        if(s[i]=='\0')
            break;
        n = s[i] - 97;
        if(arr[n]==-1)
            arr[n] = i;
    }
    
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}