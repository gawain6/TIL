#include <iostream>

using namespace std;

int N, X, progression[10002];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> X;
    for (int i = 0; i < N; ++i) cin >> progression[i];
    for (int i = 0; i < N; ++i) if (progression[i] < X) cout << progression[i] << ' ';
    return 0;
}