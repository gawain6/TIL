#include <iostream>
using namespace std;

/*
 * 1. A, B를 입력 받는다.
 * 2. A가 클 경우 '>' 출력, 반대는 '<', 같으면 '==' 출력
 */

int main(void) {
    int A, B;

    cin >> A >> B;
    if(A>B) cout << ">" << endl;
    else if(A<B) cout << "<" << endl;
    else cout << "==" << endl;
    return 0;
}