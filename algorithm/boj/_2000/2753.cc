#include <iostream>
using namespace std;

/*
 * 1. 연도를 입력 받는다.
 * 2. 윤년을 if문의 조건으로 확인한다.
 * 3. 윤년의 조건은 4의 배수이면서 100의 배수가 아닐 때 또는 400의 배수일 때이다.
 * 4. 윤년이면 1 아니면 0을 출력한다.
 */

int main(void) {
    int year;
    
    cin >> year;
    if(year%4 == 0 && (year%100 != 0 || year%400 == 0)) cout << "1\n";
    else cout << "0\n";
    return 0;
}