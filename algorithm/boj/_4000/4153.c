#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

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
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        if(arr[0]==0&arr[1]==0&arr[2]==0) break;
        SelectionSort(arr);
        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}