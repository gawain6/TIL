#include <iostream>
using namespace std;

/*
 * 1. A, B�� �Է� �޴´�.
 * 2. A+B�� ����Ѵ�.
 * 3. ���� while�� �ݺ��Ѵ�.
 * 4. EOF�� �ݺ��� �����Ѵ�.
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