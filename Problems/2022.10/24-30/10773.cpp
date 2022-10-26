#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int K, N;
    long long res = 0;

    cin >> K;
    for (int i = 0; i < K; ++i)
    {
        cin >> N;
        if (0 != N) s.push(N);
        else if (0 == N) s.pop();
    }

    while (!s.empty())
    {
        res += s.top();
        s.pop();
    }

    cout << res;

    return 0;
}