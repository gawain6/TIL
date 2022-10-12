#include <iostream>

using namespace std;

string S;
int alphabet[26];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;

    for (auto ch : S)
        ++alphabet[ch - 'a'];

    for (auto n : alphabet)
        cout << n << ' ';

    return 0;
}