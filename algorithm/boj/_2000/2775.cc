#include <iostream>
#include <algorithm>

#define ARR_SIZE 14

using namespace std;
int main() {
    int t, k, n, s;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> k;
        cin >> n;
        int prevArr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        int curArr[ARR_SIZE] = {0, };
        
        for(int j=0; j<k; j++) {
            s = 0;
            for(int l=0; l<n; l++) {
                s += prevArr[l];
                curArr[l] = s;
            }
            copy(curArr, curArr+ARR_SIZE, prevArr);
        }
        cout << curArr[n-1] << endl;
    }
}