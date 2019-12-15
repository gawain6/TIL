#include <iostream>
#include <cstdlib>
#define SIZE 3
using namespace std;

void SelectionSort(int* arr) {
    int temp;
    for(int i=0; i<SIZE-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<SIZE; j++) {
            if(arr[j] < arr[minIdx]) minIdx = j;
        }
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    while(1) {
        int arr[SIZE];
        cin >> arr[0] >> arr[1] >> arr[2];
        if(arr[0]==0&arr[1]==0&arr[2]==0) break;
        SelectionSort(arr);
        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}