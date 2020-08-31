#include <iostream>
#include <bitset>
using namespace std;

void main()
{
	// bitset : ������ �����ͷ� ���Ѵ�. ���� ������ 2������ ��ȯ�� ���� �����ش�.
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