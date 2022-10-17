#include <iostream>

using namespace std;

int N = 0; // �� �л� �� ( 1 <= N <= 1000 )
int K = 0; // �� �� �ִ� �ο� ( 1 < K <= 1000 )
int S = 0; // ���� ( 0 = ��, 1 = �� )
int Y = 0; // �г� ( 1 <= Y <= 6 )

int students[7][2]; // �г�, ����
int roomCnt = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; ++i)
    {
        cin >> S >> Y;
        ++students[Y][S];
    }

    for (int i = 1; i < 7; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            roomCnt += students[i][j] / K;
            if (students[i][j] % K != 0)  roomCnt += 1;
        }
    }

    cout << roomCnt;

    return 0;
}