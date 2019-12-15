#include <iostream>
using namespace std;

int main() {
    int a, b, c, n;
    string res;
    int arr[10] = {0,};
    cin >> a >> b >> c;
    res = to_string(a*b*c);
    
    for(int i=0; i<res.length(); i++)
        arr[(int)res[i]-48]+=1;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++)
        cout << arr[i] << '\n';
}