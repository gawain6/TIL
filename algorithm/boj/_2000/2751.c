#include <stdio.h>

void merge(int * arr, int size, int start, int mid, int end) {
    int idx=0;
    int merged[size];
    int left_idx=start;
    int right_idx=mid+1;
    while(left_idx<=mid&right_idx<=end) {
        if(arr[left_idx]<arr[right_idx]) {
            merged[idx]=arr[left_idx];
            left_idx++;
            idx++;
        } else {
            merged[idx]=arr[right_idx];
            right_idx++;
            idx++;
        }
    }
    while(left_idx<=mid) {
        merged[idx]=arr[left_idx];
        left_idx++;
        idx++;
    }
    while(right_idx<=end) {
        merged[idx]=arr[right_idx];
        right_idx++;
        idx++;
    }
    for(int i=start, j=0; i<end+1; i++, j++) {
        arr[i]=merged[j];
    }
}

void merge_sort(int * arr, int size, int start, int end) {
    if(start>=end) return;
    int mid=(start+end)/2;
    merge_sort(arr, size, start, mid);
    merge_sort(arr, size, mid+1, end);
    merge(arr, size, start, mid, end);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    merge_sort(arr, n, 0, n-1);
    for(int i=0; i<n; i++) printf("%d\n", arr[i]);
    return 0;
}