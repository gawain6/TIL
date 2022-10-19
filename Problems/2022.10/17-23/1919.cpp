#include <iostream>

using namespace std;

string str1, str2;
int alphabet1[27];
int alphabet2[27];
int cnt = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str1;
    for (int i = 0; i < str1.length(); ++i)
        ++alphabet1[str1[i] - 'a'];
    
    cin >> str2;
    for (int i = 0; i < str2.length(); ++i)
        ++alphabet2[str2[i] - 'a'];

    for (int i = 0; i < 27; ++i)
        cnt += abs(alphabet1[i] - alphabet2[i]);

    cout << cnt;
    return 0;
}