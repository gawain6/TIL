#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_pivot_index(int * arr, int start, int mid, int end) {
    int temp;
    int idx_arr[]={start, mid, end};
    if(arr[idx_arr[0]]>arr[idx_arr[1]]) temp=idx_arr[0], idx_arr[0]=idx_arr[1], idx_arr[1]=temp;
    if(arr[idx_arr[1]]>arr[idx_arr[2]]) temp=idx_arr[1], idx_arr[1]=idx_arr[2], idx_arr[2]=temp;
    if(arr[idx_arr[0]]>arr[idx_arr[1]]) temp=idx_arr[0], idx_arr[0]=idx_arr[1], idx_arr[1]=temp;
    return idx_arr[1];
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

int realNum(int n) {
    return n>4000 ? n-4000:-n;
}

int main() {
    long long sum=0;
    int n, i, mid, firstMin=-1, secondMin=-1;
    int mode[8001]={0,};
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
        mode[arr[i]>0?(4000+arr[i]):(abs(arr[i]))]++;
    }
    quick_sort(arr, 0, n-1);
    
    for(i=0; i<8001; i++) {
        if(mode[i]!=0&firstMin==-1) firstMin=secondMin=i;
        
        else if(mode[i]!=0) {
            if(mode[firstMin]<mode[i]) { // cnt가 더 큰 경우
                firstMin=secondMin=i;
            } else if(mode[firstMin]==mode[i]) { // cnt가 같은 경우
                if(realNum(firstMin)>realNum(i)) { // -1 > -2
                    if(realNum(firstMin)<realNum(secondMin)) secondMin=firstMin; // firstMin을 바꾸기 전 secondMin과 비교해서 두번째 작은 놈을 적용
                    firstMin=i;
                } else if(realNum(firstMin)==realNum(secondMin)|realNum(secondMin)>realNum(i)) {
                    secondMin=i;
                }
            }
        }
    }
    
    printf("%lld\n", (long long)round((double)sum/(double)n));
    printf("%d\n", arr[n/2]);
    printf("%d\n", realNum(secondMin));
    printf("%d\n", abs(arr[n-1]-arr[0]));
}