#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a) {
    long long res=0;
    for(int i=0; i<a.size(); i++) { res+=a[i]; }
    return res;
}

int main() {
    int n, m;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> m;
        v.push_back(m);
    }
    sum(v);
    return 0;
}