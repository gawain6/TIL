#include <iostream>
#include <list>
#include <vector>

using namespace std;

string init;
char cmd[2];
char d;
int M;
list<char>::iterator cur;
list<char> str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> init;

    for (char ch : init) str.emplace_back(ch);

    cur = str.end();

    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        cin >> cmd[0];

        switch (cmd[0])
        {
            case 'L':
                if (cur != str.begin()) --cur;
                break;

            case 'D':
                if (cur != str.end()) ++cur;
                break;
            
            case 'B':
                if (cur != str.begin())
                {
                    cur--;
                    cur = str.erase(cur);
                }
                break;

            case 'P':
                cin >> cmd[1];
                str.insert(cur, cmd[1]);
                break;
        }
    }

    for (auto ch : str)
        cout << ch;

    return 0;
}