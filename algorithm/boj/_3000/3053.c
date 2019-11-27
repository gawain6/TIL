#include <stdio.h>
#include <math.h>

int main() {
    const double pi = acos(-1.0);
    int r;
    scanf("%d", &r);
    printf("%06f\n", (pi*(r*r)));
    printf("%06f\n", (2.0*r*r));
    return 0;
}