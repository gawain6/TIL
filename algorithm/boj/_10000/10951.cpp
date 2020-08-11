#include <iostream>
using namespace std;

/*
 * 1. A, B를 입력 받는다.
 * 2. A+B를 출력한다.
 * 3. 위를 while로 반복한다.
 * 4. EOF면 반복을 종료한다.
 */

int main(void) {
    int A, B;
    while(1) {
        cin >> A >> B;
        if(cin.eof()) break;
        cout << A+B << endl;
    }
    return 0;
}