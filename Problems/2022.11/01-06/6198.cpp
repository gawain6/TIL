#include <iostream>
#include <stack>

using namespace std;

#define ll long long

stack<int> s;
int n;
ll ans = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    ll h;
    while (n--)
    {
        cin >> h;
        while (!s.empty() && s.top() <= h)
            s.pop();
        ans += s.size();
        s.push(h);
    } 
    cout << ans;

    return 0;
}