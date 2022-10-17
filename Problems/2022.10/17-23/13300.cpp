#include <iostream>

using namespace std;

int N = 0; // 총 학생 수 ( 1 <= N <= 1000 )
int K = 0; // 한 방 최대 인원 ( 1 < K <= 1000 )
int S = 0; // 성별 ( 0 = 여, 1 = 남 )
int Y = 0; // 학년 ( 1 <= Y <= 6 )

int students[7][2]; // 학년, 성별
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