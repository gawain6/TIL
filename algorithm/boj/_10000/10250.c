#include <stdio.h>
#include <math.h>

int main() {
    int t, h, w, n, front;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        if(h==1) front = 1;
        else if(n%h==0) front = h;
        else front = n%h;
        printf("%d%02d\n", front, (int)ceil((double)n/(double)h));
    }
    return 0;
}