#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 문제 : 주어진 수들의 산술평균, 중앙값, 최빈값, 범위를 출력
// N(1 ≤ N ≤ 500,000)
// 입력되는 정수의 절댓값은 4,000을 넘지 않는다.
// 최빈값이 여러 개면 최빈값 중 두 번째로 작은 값을 출력한다.

// 정수 개수인 n을 입력 받고, 정수 n개를 입력받음
// 입력 받을 때 마다 정수들의 합을 sum에 저장
// ex : 1, 3, 8, -2, 2 => -2, 1, 2, 3, 8
// 산술평균=2
// 중앙값=2
// 최빈값=1
// 범위=10

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

// 0, 1~4000, 4001~8000
int main() {
    long long sum=0;
    int n, i, mid, idx, modeMax1, modeMax2, temp;
    int mode[8001]={0,};
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
        idx=arr[i]>0?(4000+arr[i]):(abs(arr[i]));
        mode[idx]++;
        
        if(i==0) modeMax1=modeMax2=idx;
        else {
            if(mode[modeMax1]<mode[idx]) modeMax1=modeMax2=idx;
            else if(mode[modeMax1]==mode[idx]) {
                if(realNum(modeMax1)>realNum(idx)) modeMax2=idx;
                else if(realNum(modeMax1)<realNum(idx)) {
                    modeMax2=modeMax1;
                    modeMax1=idx;
                }
            }
        }
    }
    quick_sort(arr, 0, n-1);
    
    printf("%lld\n", (long long)round((double)sum/(double)n));
    printf("%d\n", arr[n/2]);
    printf("%d\n", realNum(modeMax2));
    printf("%d\n", abs(arr[n-1]-arr[0]));
}