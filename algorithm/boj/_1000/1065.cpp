#include <iostream>
using namespace std;

int main() {
    int n, i, j, subt, cnt=99;
    string num;
    cin >> n;
    if(n<=99) cnt=n;
    else {
        for(i=100; i<=n; i++) {
            num=to_string(i);
            for(j=0; j<num.size()-1; j++) {
                if(j==0) subt=(num[j]-48)-(num[j+1]-48);
                else {
                    if(subt==(num[j]-48)-(num[j+1]-48)) cnt++;
                    else break;
                }
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}

// 0. 99까지는 모두 한수이므로 99이하는 n의 값을 바로 출력
// 1. 숫자를 문자열로 변환
// 2. for문으로 문자열의 자리수의 차이를 구함
// 3. for문이 끝까지 돌았다면 한수이므로 cnt를 증가
// 4. 

// 1~99 모두 한수
// 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 <- 다 한수가 아님
