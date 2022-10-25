#include <iostream>
#include <list>

using namespace std;

list<int> s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string cmd;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int data;
        cin >> cmd;

        if (cmd.compare("push") == 0)
        {
            cin >> data;
            s.emplace_back(data);
        }
        else if (cmd.compare("pop") == 0)
        {
            if (s.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << s.back() << '\n';
            s.pop_back();
        }
        else if (cmd.compare("size") == 0)
        {
            cout << s.size() << '\n';
        }
        else if (cmd.compare("empty") == 0)
        {
            cout << (int)s.empty() << '\n';
        }
        else if (cmd.compare("top") == 0)
        {
            if (s.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << s.back() << '\n';
        }
    }

    return 0;
}