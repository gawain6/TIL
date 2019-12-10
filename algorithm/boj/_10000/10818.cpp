#include <iostream>
using namespace std;

int main() {
    int n, temp, min, max;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> temp;
        if(i==0) min=max=temp;
        if(min>temp) min=temp;
        if(max<temp) max=temp;
    }
    cout << min << " " << max << '\n';
}