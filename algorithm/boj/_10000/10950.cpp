#include <iostream>
using namespace std;

/*
 * 1. 덧셈을 반복할 테스트 케이스 개수 T를 입력받는다.
 * 2. for문으로 한 줄에 변수 A, B를 입력 받고, A+B의 값을 배열 arr에 저장하는 것을 T만큼 반복한다.
 * 3. for문으로 arr배열을 A+B를 한 줄씩 반복 출력한다.
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