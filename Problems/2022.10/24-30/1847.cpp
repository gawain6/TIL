#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;

    int n, k;
    int num = 0;

    string str = "";

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> k; // 3

        if (s.empty())
        {
            s.push(++num);
            str.append("+\n");
        }

        while (k != s.top() && k > num)
        {
            s.push(++num);
            str.append("+\n");
        }
        
        if (k == s.top())
        {
            s.pop();
            str.append("-\n");
        }
        else
        {
            str = "NO";
            break;
        }
    }

    cout << str;

    return(0);
}