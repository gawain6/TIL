#include <stdio.h>

int GetPivotIndex(int (*arr)[2], int start, int mid, int end) {
    int temp;
    int idxArr[]={start, mid, end};
    if(arr[idxArr[0]][0]>arr[idxArr[1]][0]|(arr[idxArr[0]][0]==arr[idxArr[1]][0]&arr[idxArr[0]][1]>arr[idxArr[1]][1])) {
        temp=idxArr[0]; idxArr[0]=idxArr[1]; idxArr[1]=temp;
    }
    if(arr[idxArr[1]][0]>arr[idxArr[2]][0]|(arr[idxArr[1]][0]==arr[idxArr[2]][0]&arr[idxArr[1]][1]>arr[idxArr[2]][1])) {
        temp=idxArr[1]; idxArr[1]=idxArr[2]; idxArr[2]=temp;
    }
    if(arr[idxArr[0]][0]>arr[idxArr[1]][0]|(arr[idxArr[0]][0]==arr[idxArr[1]][0]&arr[idxArr[0]][1]>arr[idxArr[1]][1])) {
        temp=idxArr[0]; idxArr[0]=idxArr[1]; idxArr[1]=temp;
    }
    return idxArr[1];
}

void QuickSort(int (*arr)[2], int start, int end) {
    if(start>=end) return;
    int leftIdx=start, rightIdx=end, pivotIdx, pivot[2], temp;
    int mid=(start+end)/2;
    pivotIdx=GetPivotIndex(arr, start, mid, end);
    
    temp=arr[mid][0]; arr[mid][0]=arr[pivotIdx][0]; arr[pivotIdx][0]=temp;
    temp=arr[mid][1]; arr[mid][1]=arr[pivotIdx][1]; arr[pivotIdx][1]=temp;
    pivot[0]=arr[mid][0]; pivot[1]=arr[mid][1];
    
    while(leftIdx<=rightIdx) {
        while(arr[leftIdx][0]<pivot[0]|(arr[leftIdx][0]==pivot[0]&arr[leftIdx][1]<pivot[1])) leftIdx++;
        while(arr[rightIdx][0]>pivot[0]|(arr[rightIdx][0]==pivot[0]&arr[rightIdx][1]>pivot[1])) rightIdx--;
        if(leftIdx<=rightIdx) {
            temp=arr[leftIdx][0]; arr[leftIdx][0]=arr[rightIdx][0]; arr[rightIdx][0]=temp;
            temp=arr[leftIdx][1]; arr[leftIdx][1]=arr[rightIdx][1]; arr[rightIdx][1]=temp;
            leftIdx++;
            rightIdx--;
        }
    }
    QuickSort(arr, start, rightIdx);
    QuickSort(arr, leftIdx, end);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int coordinate[n][2];
    for(i=0; i<n; i++) { scanf("%d %d", &coordinate[i][0], &coordinate[i][1]); }
    QuickSort(coordinate, 0, n-1);
    for(i=0; i<n; i++) { printf("%d %d\n", coordinate[i][0], coordinate[i][1]); }
}