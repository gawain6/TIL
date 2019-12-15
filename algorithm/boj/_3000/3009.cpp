#include <iostream>
#define SIZE 3
using namespace std;

int Count(int* arr, int n) {
    int cnt = 0;
    for(int i=0; i<SIZE; i++) {
        if(arr[i]==n) cnt++;
        if(cnt==2) break;
    }
    return cnt;
}

int main() {
    int x, y, i;
    int xArr[SIZE];
    int yArr[SIZE];
    int coordinate[2] = {0, 0};
    for(i=0; i<SIZE; i++) {
        cin >> x >> y;
        xArr[i] = x;
        yArr[i] = y;
    }
    for(i=0; i<SIZE; i++) {
        if(Count(xArr, xArr[i])==1) coordinate[0] = xArr[i];
        if(Count(yArr, yArr[i])==1) coordinate[1] = yArr[i];
    }
    cout << coordinate[0] << " " << coordinate[1] << endl;
    return 0;
}