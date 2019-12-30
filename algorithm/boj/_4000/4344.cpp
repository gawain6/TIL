#include <iostream>
using namespace std;

int main() {
    int c, n, i, j;
    cin >> c;
    for(i=0; i<c; i++) {
        int cnt=0;
        double avg=0;
        int point[1000];
        cin >> n;
        for(j=0; j<n; j++) {
            cin >> point[j];
            avg+=point[j];
        }
        avg/=n;
        for(j=0; j<n; j++) {
            if(avg<point[j]) cnt++;
        }
        printf("%.3f%%\n", (double)cnt/n*100);
    }
}