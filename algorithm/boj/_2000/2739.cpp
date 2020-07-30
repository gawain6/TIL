#include <iostream>
using namespace std;

/*
 * 1. 몇 단의 구구단을 출력할 것인지 입력 받는다.
 * 2. for문을 이용해서 입력 받은 값에 따라 구구단을 출력한다.
 */

int main(void) {
    int N;

    cin >> N;
    for(int i=1; i<10; i++) {
        cout << N << " * " << i << " = " << N*i << endl;
    }
    return 0;
}