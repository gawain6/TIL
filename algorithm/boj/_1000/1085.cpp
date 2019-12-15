#include <iostream>

using namespace std;
int main() {
    int x, y, w, h, width, height;
    cin >> x >> y >> w >> h;
    width = w-x>x ? x : w-x;
    height = h-y>y ? y : h-y;
    cout << (width>=height ? height : width) << endl;
}