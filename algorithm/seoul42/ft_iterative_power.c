#include <stdio.h>

int ft_iterative_power(int nb, int power) {
    int i, ans=1;
    for(i=0; i<power; i++) {
        ans*=nb;
    }
    return ans;
}