#include <iostream>

template <typename T>
inline T SQUARE(T x) {
    return x*x;
}

using namespace std;
int main() {
    cout << SQUARE(5.5) << endl;
}