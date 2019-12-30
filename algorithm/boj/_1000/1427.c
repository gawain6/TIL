#include <stdio.h>
#include <string.h>

// 첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
// 첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
// 2143 -> 4321

int get_pivot_index(int * arr, int start, int mid, int end) {
    int temp;
    int idxArr[]={start, mid, end};
    if(arr[idxArr[0]]>arr[idxArr[1]]) temp=idxArr[0], idxArr[0]=idxArr[1], idxArr[1]=temp;
    if(arr[idxArr[1]]>arr[idxArr[2]]) temp=idxArr[1], idxArr[1]=idxArr[2], idxArr[2]=temp;
    if(arr[idxArr[0]]>arr[idxArr[1]]) temp=idxArr[0], idxArr[0]=idxArr[1], idxArr[1]=temp;
    return idxArr[1];   
}

void quick_sort(int * arr, int start, int end) {
    if(start>=end) return;
    int left_idx=start, right_idx=end, mid=(start+end)/2, temp, pivot;
    int pivot_idx=get_pivot_index(arr, start, mid, end);
    
    temp=arr[mid]; arr[mid]=arr[pivot_idx]; arr[pivot_idx]=temp;
    pivot=arr[mid];
    while(left_idx<=right_idx) {
        while(arr[left_idx]<pivot) left_idx++;
        while(arr[right_idx]>pivot) right_idx--;
        if(left_idx<=right_idx) {
            temp=arr[left_idx], arr[left_idx]=arr[right_idx], arr[right_idx]=temp;
            left_idx++;
            right_idx--;
        }
    }
    quick_sort(arr, start, right_idx);
    quick_sort(arr, left_idx, end);
}

int main() {
    int i, size;
    char n[10];
    scanf("%s", n);
    size=strlen(n);
    int arr[size];
    for(i=0; i<size; i++) { arr[i]=(int)n[i]-48; }
    quick_sort(arr, 0, size-1);
    for(i=size-1; i>=0; i--) { printf("%d", arr[i]); }
    printf("\n");
    return 0;
}