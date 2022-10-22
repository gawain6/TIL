#include <iostream>
#include <list>

using namespace std;

int cnt;
string str;

list<char> li;
list<char>::iterator cur;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> cnt;

    for (int i = 0; i < cnt; ++i)
    {
        cin >> str;
        cur = li.begin();

        for (auto ch : str)
        {
            switch (ch)
            {
                case '<':
                    if (cur != li.begin()) --cur;
                    break;

                case '>':
                    if (cur != li.end()) ++cur;
                    break;
                
                case '-':
                    if (cur != li.begin())
                    {
                        --cur;
                        cur = li.erase(cur);
                    }
                    break;

                default:
                    li.insert(cur, ch);
                    break;
            }
        }
        for (auto ch : li) cout << ch;
        cout << '\n';
        li.clear();
    }

    return 0;
}