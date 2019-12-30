#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

int compare(const void * a, const void * b) {
    Point na=*(Point *)a;
    Point nb=*(Point *)b;

    if(na.ypos!=nb.ypos) { return na.ypos-nb.ypos; }
    return na.xpos-nb.xpos;
}

int main() {
    int n, i;
    Point arr[100001];
    scanf("%d", &n);
    for(i=0; i<n; i++) { scanf("%d %d", &arr[i].xpos, &arr[i].ypos); }
    qsort(arr, n, sizeof(Point), compare);
    for(i=0; i<n; i++) { printf("%d %d\n", arr[i].xpos, arr[i].ypos); }
}