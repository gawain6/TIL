#include <iostream>
using namespace std;

/*
 * 1. ������ �Է� �޴´�.
 * 2. ������ if���� �������� Ȯ���Ѵ�.
 * 3. ������ ������ 4�� ����̸鼭 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.
 * 4. �����̸� 1 �ƴϸ� 0�� ����Ѵ�.
 */

int main(void) {
    int year;
    
    cin >> year;
    if(year%4 == 0 && (year%100 != 0 || year%400 == 0)) cout << "1\n";
    else cout << "0\n";
    return 0;
}