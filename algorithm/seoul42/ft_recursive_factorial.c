#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if(nb==1) return 1;
    else if(nb>1) {
        long long temp = (long long) nb*ft_recursive_factorial(nb-1); // int의 범위를 넘어서는지 비교하기 위해 변환
        if(temp<=2147438647) return temp;
        else return 0;
    }
    else return 0; // nb가 음수면 0 반환
}