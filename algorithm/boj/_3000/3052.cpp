#include <iostream>
using namespace std;

/*
 * 1. ���� 10���� �� �ٿ� �Է¹޴´�. (0 <= x <= 1000)
 * 2. �� ���ڸ� 42�� ���� �������� ���ѵ� ���� �ٸ� ���� �� ������ ����Ѵ�.
 * 3. ar[99] �� ������ ���� idx�� �ؼ� ++ar[��] ������ �Ѵ�.
 * 4. for������ 0�� �ƴ� ar ��Ҹ� count �Ͽ� �� ���� ����Ѵ�.
 */

int main() {
    int N, cnt = 0;
    int ar[99] = {};

    for(int i = 0; i < 10; ++i)
    {
        cin >> N;
        ++ar[N%42];
    }
    for(int i = 0; i < sizeof(ar) / sizeof(int); ++i)
    {
        if(0 != ar[i])
            ++cnt;
    }
    cout << cnt << endl;
}