#include <stdio.h>

int ft_iterative_factorial(int nb) {
    long long ans=1;
    while(nb>0&&ans*nb<=2147438647) {
        ans*=nb;
        nb--;
    }
    if(nb<0||ans*nb>2147438647) return 0;
    return ans;
}