#include <iostream>
using namespace std;

/*
 * 1. A, B�� �Է� �޴´�.
 * 2. A�� Ŭ ��� '>' ���, �ݴ�� '<', ������ '==' ���
 */

int main(void) {
    int A, B;

    cin >> A >> B;
    if(A>B) cout << ">" << endl;
    else if(A<B) cout << "<" << endl;
    else cout << "==" << endl;
    return 0;
}