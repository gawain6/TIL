#include <stdio.h>

int ft_find_next_prime(int nb) {
    int i;
    if(nb<1||(nb!=2&&nb%2==0)) return ft_find_next_prime(nb+1);
    for(i=3; i*i<=nb; i++) {
        if(nb%i==0) return ft_find_next_prime(nb+1);
    }
    return nb;
}