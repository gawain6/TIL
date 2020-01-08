#include <stdio.h>

int main() {
    int n, i;
    char * bestSeller[1000]={"top"};
    // scanf("%d", &n);
    

    printf("%s", *&bestSeller[0]);
}