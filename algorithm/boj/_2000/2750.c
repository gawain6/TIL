#include <stdio.h>

void insertionSort(int * li, int size) {
    int temp, i, j;
    for(i=1; i<size; i++) {
        temp=li[i];
        for(j=i-1; j>-2; j--) {
            if(j==-1) break;
            if(li[j]>temp) li[j+1]=li[j];
            else break;
        }
        li[j+1]=temp;
    }
}

// 정수 n개를 나타내는 n을 입력 받음
// for문으로 n 크기의 배열에 정수 num을 입력 받음
// 함수에 배열 주소를 넘겨서 insertion sort로 소팅
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    for(i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
}