#include <iostream>
using namespace std;

/*
 * 1. n�� �Է¹޴´�.
 * 2. for������ 1���� n������ ���� ���� ����Ѵ�.
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