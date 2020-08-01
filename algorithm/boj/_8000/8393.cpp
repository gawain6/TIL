#include <iostream>
using namespace std;

/*
 * 1. n을 입력받는다.
 * 2. for문으로 1부터 n까지의 합을 더해 출력한다.
 */

int main(void) {
    int n, res = 0;

    cin >> n;
    for(int i=1; i<=n; i++) {
        res += i;
    }
    cout << res << endl;
    return 0;
}