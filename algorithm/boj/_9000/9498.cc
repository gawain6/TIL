#include <iostream>
using namespace std;

/*
 * 1. ������ �Է� �޴´�.
 * 2. 90~100 A, 80~89 B, 70~79 C, 60~69 D, 59 ���ϴ� F
 * 3. if�� �������� ���� Ȯ�� �� ���
 */

int main(void) {
    int point;

    cin >> point;
    if(point<=100 && point>=90) cout << "A\n" << endl;
    else if(point<=89 && point>=80) cout << "B\n" << endl;
    else if(point<=79 && point>=70) cout << "C\n" << endl;
    else if(point<=69 && point>=60) cout << "D\n" << endl;
    else cout << "F\n" << endl;
    return 0;
}