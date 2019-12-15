#include <iostream>
using namespace std;

int main() {
    int n, i;
    double m=0, sum=0;
    cin >> n;
    double point[n];
    for(i=0; i<n; i++) {
        cin >> point[i];
        if(point[i]>m) m=point[i];
    }
    for(i=0; i<n; i++) {
        point[i]=point[i]/m*100;
        sum+=point[i];
    }
    printf("%.6f\n", sum/n);
}