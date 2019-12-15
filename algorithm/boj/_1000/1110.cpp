#include <iostream>
using namespace std;

int main() {
    int n, a, b, ret, cnt=0;
    cin >> n;
    ret = n;
    do {
        a = ret%10;
        b = ((ret%10)+(ret>=10 ? ret/10 : 0))%10;
        ret = a*10+b;
        cnt++;
    } while(to_string(n)!=to_string(ret));
    cout << cnt << '\n';
}