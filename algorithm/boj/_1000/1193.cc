#include <iostream>

using namespace std;
int main() {
    int n, temp;
    int n1 = 1;
    int n2 = 1;
    int cnt = 1;
    cin >> n;
    while(true) {
        if(n==cnt) {
            cout << n1 << "/" << n2 << endl;
            break;
        } else if(n1==1&n2%2!=0) {
            n2++; cnt++;
        } else if(n1==1&n2%2==0) {
            cnt+=n2-1;
            temp = n1;
            n1 = n2;
            n2 = temp;
            if(cnt>n) {
                for(int i=n1; i>1; i--) {
                    n1--; n2++; cnt--;
                    if(n==cnt) break;
                }
            }
        } else if(n1%2!=0&n2==1) {
            cnt+=n1-1;
            temp = n1;
            n1 = n2;
            n2 = temp;
            if(cnt>n) {
                for(int i=n2; i>1; i--) {
                    n1++; n2--; cnt--;
                    if(n==cnt) break;
                }
            }
        } else if(n1%2==0&n2==1) {
            n1++; cnt++;
        }
    }
}