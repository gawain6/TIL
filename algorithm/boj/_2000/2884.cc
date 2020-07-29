#include <iostream>
using namespace std;

/*
 * 1. 한 줄에 시간(H)과 분(M)을 입력받는다.
 * 2. M -= 45를 한다.
 * 3. M<=0 이면 H, M을 그대로 출력한다.
 * 3. 음수가 나올 경우 H-1을 하고, M = 60 - M 을 하고, H, M을 출력한다.
 * 4. 0시 이전으로 알람이 맞춰지면 23시로 출력한다.
 */

int main(void) {
    int H, M;
    
    cin >> H >> M;
    M -= 45;
    if(M < 0) {
        H = (H-1 < 0) ? 23 : H-1;
        M = 60 + M; 
    }
    cout << H << " " << M << endl;
    return 0;
}