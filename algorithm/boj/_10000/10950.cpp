#include <iostream>
using namespace std;

/*
 * 1. ������ �ݺ��� �׽�Ʈ ���̽� ���� T�� �Է¹޴´�.
 * 2. for������ �� �ٿ� ���� A, B�� �Է� �ް�, A+B�� ���� �迭 arr�� �����ϴ� ���� T��ŭ �ݺ��Ѵ�.
 * 3. for������ arr�迭�� A+B�� �� �پ� �ݺ� ����Ѵ�.
 */

int main(void) {
    int T, A, B;
    int* arr;

    cin >> T;
    arr = new int[T]();
    for(int i=0; i<T; i++) {
        cin >> A >> B;
        arr[i] = A + B;
    }
    for(int i=0; i<T; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}