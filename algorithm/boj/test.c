#include <stdio.h>

void SelectionSort(int * pa) {
    int temp;
    for(int i=0; i<4; i++) {
        int minIdx=i;
        for(int j=i+1; j<5; j++) {
            if(pa[j]<pa[minIdx]) minIdx=j;
        }
        temp=pa[i];
        pa[i]=pa[minIdx];
        pa[minIdx]=temp;
    }
}

void MaxAndMin(int ** p1, int ** p2, int * parr) {
    parr[0]=5, parr[1]=3, parr[2]=7, parr[3]=1, parr[4]=2;
    SelectionSort(parr);
    *p1=&parr[4];
    *p2=parr;
}

int main() {
    int * maxPtr;
    int * minPtr;
    int arr[5];
    MaxAndMin(&maxPtr, &minPtr, arr);
    printf("%d %d \n", *maxPtr, *minPtr);
    return 0;
}