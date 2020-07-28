#include <iostream>
using namespace std;

/*
 * 1. x, y 값을 한 줄씩 입력 받는다.
 * 2. if문으로 x, y 값이 양음수인지 판단한다.
 * 3. x, y 값에 따라 점이 몇 사분면에 속하는지 출력한다.
 */

int main(void) {
	int x, y;
	
	cin >> x;
	cin >> y;
	if(x>0 && y>0) cout << "1\n";
	else if(x<0 && y>0) cout << "2\n";
	else if(x<0 && y<0) cout << "3\n";
	else cout << "4\n";
	return 0;
}