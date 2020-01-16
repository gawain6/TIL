#include <stdio.h>
#include <math.h>

int ft_sqrt(int nb) {
    int ans=pow((double)nb, 0.5);
    if(ans*ans!=nb) return 0;
    return ans;
}