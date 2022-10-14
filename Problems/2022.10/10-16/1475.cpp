#include <iostream>

using namespace std;

int number[10] = { 0, };
string N;
int res = 0;
bool secondNine = false;
bool secondSix = false;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (char ch : N)
    {
        if (ch == '9' && secondNine)
        {
            ch = '6';
            secondNine = false;
        }
        else if (ch == '9') secondNine = true;

        else if (ch == '6' && secondSix)
        {
            ch = '9';
            secondSix = false;
        }
        else if (ch == '6') secondSix = true;

        int index = ch - '0';
        ++number[index];
        res = max(res, number[index]);
    }

    return 0;
}