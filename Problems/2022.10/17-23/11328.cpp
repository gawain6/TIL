#include <iostream>

using namespace std;

int N; // 0 < N < 1001
int cmp1[27];
int cmp2[27];

string str1, str2;
string res;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> str1 >> str2;
        res = "Possible";
        for (int j = 0; j < str1.length(); ++j)
            ++cmp1[str1[j] - 'a'];

        for (int j = 0; j < str2.length(); ++j)
            ++cmp2[str2[j] - 'a'];

        for (int j = 0; j < 27; ++j)
        {
            if (cmp1[j] != cmp2[j])
            {
                res = "Impossible";
                break;
            }
        }

        cout << res << '\n';
        fill(cmp1, cmp1 + 27, 0);
        fill(cmp2, cmp2 + 27, 0);
    }

    return 0;
}