#include <iostream>
using namespace std;

/*
 * 1. x, y ���� �� �پ� �Է� �޴´�.
 * 2. if������ x, y ���� ���������� �Ǵ��Ѵ�.
 * 3. x, y ���� ���� ���� �� ��и鿡 ���ϴ��� ����Ѵ�.
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