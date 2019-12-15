#include <stdio.h>

int main() {
    int x, y, w, h, width, height;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    width = w-x>x ? x : w-x;
    height = h-y>y ? y : h-y;
    printf("%d\n", width>=height ? height : width);
}