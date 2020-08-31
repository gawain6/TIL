#include <iostream>
using namespace std;

/*
 * 1. 숫자 10개를 각 줄에 입력받는다. (0 <= x <= 1000)
 * 2. 각 숫자를 42로 나눈 나머지를 구한뒤 서로 다른 값이 몇 개인지 출력한다.
 * 3. ar[99] 에 나머지 값을 idx로 해서 ++ar[값] 연산을 한다.
 * 4. for문으로 0이 아닌 ar 요소를 count 하여 그 값을 출력한다.
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