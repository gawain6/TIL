#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int numbers[n];
    int cnt = 0;
    
    for(int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    
    for(int i=0; i<n; i++) {
        if(numbers[i]==1) continue;
        for(int j=2; j<numbers[i]; j++) {
            if(numbers[i]%j==0) {
                cnt -= 1;
                break;
            }
        }
        cnt += 1;
    }
    cout << cnt << endl;
}