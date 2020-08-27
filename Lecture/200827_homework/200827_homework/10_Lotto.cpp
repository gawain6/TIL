#include <iostream>
#include <time.h>
using namespace std;

/*
1. for문으로 난수 값 6개를 배열에 저장한다.
2. 중복되는 값이 있는지 확인한다.
3. 중복되는 값은 다시 난수를 돌리고, 중복을 다시 확인한다.
4. bubble sort를 이용해 배열 값을 오름차순으로 정렬한다.
*/

void Rand_Extraction(int _lotto[], int _size);
void Redundancy_Check(int _lotto[], int _currentIndex);
void Bubble_Sort(int _lotto[], int _size);
void Show_Lotto(int _lotto[], int _cnt, int _size);
void Lotto();

void Rand_Extraction(int _lotto[], int _size)
{
	for (int i = 0; i < _size; ++i)
	{
		_lotto[i] = (rand() % 45) + 1;
		if (0 != i)
			Redundancy_Check(_lotto, i);
	}
}

void Redundancy_Check(int _lotto[], int _currentIndex)
{
	for (int i = 0; i < _currentIndex; ++i)
	{
		if (_lotto[i] == _lotto[_currentIndex])
		{
			_lotto[_currentIndex] = (rand() % 45) + 1;
			i = -1;
		}
	}
}

void Bubble_Sort(int _lotto[], int _size)
{
	int temp = 0;

	for (int i = 0; i < _size - 1; ++i)
	{
		for (int j = i + 1; j < _size - i; ++j)
		{
			if (_lotto[j] < _lotto[j-1])
			{
				temp = _lotto[j];
				_lotto[j] = _lotto[j-1];
				_lotto[j] = temp;
			}
		}
	}
}

void Show_Lotto(int _lotto[], int _cnt, int _size)
{
	cout << _cnt << " 회차 : ";
	for (int i = 0; i < _size; ++i)
		cout << _lotto[i] << '\t';
	cout << "\n======================================================" << endl;
}

void Lotto()
{
	int lotto[6] = {};
	int cnt = 7;
	int size = sizeof(lotto) / sizeof(int);

	for (int i = 1; i < cnt; ++i)
	{
		Rand_Extraction(lotto, size);
		Bubble_Sort(lotto, size);
		Show_Lotto(lotto, i, size);
	}
}

void main()
{
	srand(unsigned(time(NULL)));
	Lotto();
}