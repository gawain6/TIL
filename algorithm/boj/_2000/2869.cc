#include <iostream>

using namespace std;
int main() {
    int a, b, v;
    cin >> a >> b >> v;
    if((a-b)*((v-a)/(a-b))+a==v) cout << (v-a)/(a-b)+1 << endl;
    else cout << (v-a)/(a-b)+2 << endl;
}