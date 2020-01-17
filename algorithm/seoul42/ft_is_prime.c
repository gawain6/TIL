#include <stdio.h>

int ft_is_prime(int nb) {
    int i;
    if(nb<1||(nb!=2&&nb%2==0)) return 0;
    for(i=3; i*i<=nb; i++) {
        if(nb%i==0) return 0;
    }
    return 1;
}