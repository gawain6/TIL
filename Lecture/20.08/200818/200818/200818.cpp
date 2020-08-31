#include <iostream>
#include <bitset>
using namespace std;

void main()
{
	// bitset : 정수를 데이터로 취한다. 받은 정수를 2진수로 변환한 값을 보여준다.
	bitset<4> bitA = 5;
	bitset<4> bitB = 6;
	bitset<4> bitC = 0;

	cout << bitA << endl;
	cout << bitB << endl;
	cout << "======================" << endl;

	bitC = bitA & bitB;
	cout << bitC << endl;

	bitC = bitA | bitB;
	cout << bitC << endl;

	bitC = bitA ^ bitB;
	cout << bitC << endl;

	bitC = ~bitA;
	cout << bitC << endl;
}