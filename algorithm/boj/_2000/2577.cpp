#include <iostream>
using namespace std;

/*
 * 1. �� �� �� �� A, B, C�� �Է� ����.
 * 2. A * B * C�� ���� ���� res�� ����.
 * 3. ������ ������ ���� �� �ڸ��� ���� ����.
 * 4. �迭 ar[10]�� idx�� �´� ���� ������ +1.
 * 5. �迭�� �ٿ� �ϳ��� ����Ѵ�.
 */

int main()
{
    int A, B, C, res = 0, n = 0, cnt = 0, temp = 1;
    int ar[10] = {};

    cin >> A >> B >> C;
    res = A * B * C;
    n = res;
    do {
		n /= 10;
        ++cnt;
	} while (n > 0);

    for(long long i = 10; i <= 1000000000; i*=10)
    {
        if(temp > cnt) break;
        ++(ar[(res % i) / (i / 10)]);
        ++temp;
    }
    for(int i = i; i < 10; ++i)
        cout << ar[i] << endl;
}