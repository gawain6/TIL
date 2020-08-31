#include <iostream>
using namespace std;

/*
 * 1. ù �ٿ� ���� ���� N�� �Է¹޴´�. (N <= 1000)
 * 2. �� ° �ٿ� N��ŭ ���� �Է¹޴´�. (0 <= x <= 100)
 * 3. ���� �� �� �ִ��� M�� �ְ�, ��� ������ ����/M*100 ���� ��ģ��.
 * 4. ���������� ���ο� ����� ����Ѵ�.
 */

int main() {
    int n;
    float max = 0, total = 0;
    float ar[1000] = {};

    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> ar[i];
        if(ar[i] > max) max = ar[i];
    }
    for(int i = 0; i < n; ++i)
    {
        ar[i] = ar[i]/max*100.f;
        total += ar[i];
    }
    cout << total / (float)n << endl;
}