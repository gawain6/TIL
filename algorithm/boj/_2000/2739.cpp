#include <iostream>
using namespace std;

/*
 * 1. �� ���� �������� ����� ������ �Է� �޴´�.
 * 2. for���� �̿��ؼ� �Է� ���� ���� ���� �������� ����Ѵ�.
 */

int main(void) {
    int N;

    cin >> N;
    for(int i=1; i<10; i++) {
        cout << N << " * " << i << " = " << N*i << endl;
    }
    return 0;
}