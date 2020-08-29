#include <iostream>
using namespace std;

/*
 * 1. 각 한 줄 당 A, B, C를 입력 받음.
 * 2. A * B * C를 곱한 값을 res에 저장.
 * 3. 나머지 연산을 통해 각 자리의 몫을 구함.
 * 4. 배열 ar[10]에 idx에 맞는 수가 나오면 +1.
 * 5. 배열을 줄에 하나씩 출력한다.
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