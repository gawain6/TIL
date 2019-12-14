#include <iostream>
using namespace std;

int main() {
    int n, i, j, cnt=1;
    int arr[10];
    for(i=0; i<10; i++) {
        cin >> n;
        arr[i]=n%42;
    }
    for(i=0; i<9; i++) {
        for(j=i+1; j<10; j++) if(arr[i]==arr[j]) break;
        if(arr[i]!=arr[j]) cnt++;
    }
    cout << cnt << '\n';
}