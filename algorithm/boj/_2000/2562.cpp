#include <iostream>
using namespace std;

/*
 * 1. for������ �� �ٿ� �ϳ��� N�� �Է¹޴´�.
 * 2. ù �Է��� ��� �Է� ���� ar[0]��, �ε��� ���� ar[1]�� �ִ´�.
 * 3. ���� �Է��� ar[0]�� N�� �� �� ū ���� �迭�� �ִ´�.
 * 4. for���� ����Ǹ� ar[0]�� ar[1]�� �� �� �ٿ� ����Ѵ�.
 */

int main()
{
	int N;
	int ar[2] = {};

	for(int i = 0; i < 9; ++i)
	{
		cin >> N;
		if(ar[0] < N)
		{
			ar[0] = N;
			ar[1] = i+1;
		}
	}
	cout << ar[0] << endl << ar[1] << endl;
}