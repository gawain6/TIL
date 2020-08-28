#include <iostream>
using namespace std;

/*
 * 1. for문으로 한 줄에 하나씩 N에 입력받는다.
 * 2. 첫 입력일 경우 입력 값을 ar[0]에, 인덱스 값을 ar[1]에 넣는다.
 * 3. 이후 입력은 ar[0]과 N을 비교 후 큰 값을 배열에 넣는다.
 * 4. for문이 종료되면 ar[0]과 ar[1]을 각 한 줄에 출력한다.
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