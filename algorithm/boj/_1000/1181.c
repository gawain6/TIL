#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetPivotIndex(char ** arr, int start, int mid, int end) {
    int size, temp, i;
    int idxArr[]={start, mid, end};
    if(strlen(*&arr[idxArr[0]])>strlen(*&arr[idxArr[1]])) { // 문자열 길이가 다를 때
        temp=idxArr[0]; idxArr[0]=idxArr[1]; idxArr[1]=temp;
    } else if(strlen(*&arr[idxArr[0]])==strlen(*&arr[idxArr[1]])) { // 문자열 길이가 같을 때
        size = strlen(*&arr[idxArr[0]]); // 둘 다 문자열 크기는 같으니 아무거나로 크기 잡음
        for(i=0; i<size; i++) { // 각 문자끼리 사전순 비교
            if(*&arr[idxArr[0]][i]>*&arr[idxArr[1]][i]) {
                temp=idxArr[0]; idxArr[0]=idxArr[1]; idxArr[1]=temp;
                break;
            }
        }
    }
    if(strlen(*&arr[idxArr[1]])>strlen(*&arr[idxArr[2]])) { // 문자열 길이가 다를 때
        temp=idxArr[1]; idxArr[1]=idxArr[2]; idxArr[2]=temp;
    } else if(strlen(*&arr[idxArr[1]])==strlen(*&arr[idxArr[2]])) { // 문자열 길이가 같을 때
        size = strlen(*&arr[idxArr[1]]); // 둘 다 문자열 크기는 같으니 아무거나로 크기 잡음
        for(i=0; i<size; i++) { // 각 문자끼리 사전순 비교
            if(*&arr[idxArr[1]][i]>*&arr[idxArr[2]][i]) {
                temp=idxArr[1]; idxArr[1]=idxArr[2]; idxArr[2]=temp;
                break;
            }
        }
    }
    if(strlen(*&arr[idxArr[0]])>strlen(*&arr[idxArr[1]])) { // 문자열 길이가 다를 때
        temp=idxArr[0]; idxArr[0]=idxArr[1]; idxArr[1]=temp;
    } else if(strlen(*&arr[idxArr[0]])==strlen(*&arr[idxArr[1]])) { // 문자열 길이가 같을 때
        size = strlen(*&arr[idxArr[0]]); // 둘 다 문자열 크기는 같으니 아무거나로 크기 잡음
        for(i=0; i<size; i++) { // 각 문자끼리 사전순 비교
            if(*&arr[idxArr[0]][i]>*&arr[idxArr[1]][i]) {
                temp=idxArr[0]; idxArr[0]=idxArr[1]; idxArr[1]=temp;
                break;
            }
        }
    }
    return idxArr[1];   
}

void QuickSort(char ** arr, int start, int end) {
    if(start>=end) return;
    int size, i, bfIdx, left_idx=start, right_idx=end, mid=(start+end)/2;
    char * temp=(char*)malloc(51);
    char * pivot=(char*)malloc(51);
    int pivot_idx=GetPivotIndex(arr, start, mid, end);
    
    temp=*&arr[mid]; *&arr[mid]=*&arr[pivot_idx]; *&arr[pivot_idx]=temp;
    pivot=*&arr[mid];
    while(left_idx<=right_idx) {
        while(1) {
            bfIdx=left_idx;
            if(strlen(*&arr[left_idx])>strlen(pivot)) break; // left_idx가 문자열이 더 길면 바로 정지
            else if(strlen(*&arr[left_idx])<strlen(pivot)) left_idx++; // 문자열이 pivot이 크면 다음 left_idx로 이동
            else if(strlen(*&arr[left_idx])==strlen(pivot)) { // 문자열이 같으면 각 문자를 사전순으로 비교
                size=strlen(pivot);
                for(i=0; i<size; i++) {
                    if(*&arr[left_idx][i]<pivot[i]) { // 사전순으로 비교해서 pivot이 크면 역시 다음 left_idx로 이동
                        left_idx++;
                        break;
                    } else if(*&arr[left_idx][i]>pivot[i]) break; // 사전순으로 비교해서 pivot이 작으면 정지
                }
            }
            if(bfIdx==left_idx) break; // 이전 인덱스와 비교해서 증가하지 않았다면 자리 교체가 필요하므로 while문을 빠져나감
        }
        while(1) {
            bfIdx=right_idx;
            if(strlen(*&arr[right_idx])<strlen(pivot)) break;
            else if(strlen(*&arr[right_idx])>strlen(pivot)) right_idx--;
            else if(strlen(*&arr[right_idx])==strlen(pivot)) {
                size=strlen(pivot);
                for(i=0; i<size; i++) {
                    if(*&arr[right_idx][i]>pivot[i]) {
                        right_idx--;
                        break;
                    } else if(*&arr[right_idx][i]<pivot[i]) break;
                }
            }
            if(bfIdx==right_idx) break;
        }
        if(left_idx<=right_idx) {
            temp=*&arr[left_idx]; *&arr[left_idx]=*&arr[right_idx]; *&arr[right_idx]=temp;
            left_idx++;
            right_idx--;
        }
    }
    QuickSort(arr, start, right_idx);
    QuickSort(arr, left_idx, end);
}

// typedef struct name {
//     char str[51];
// } Name;

// int cmp(const void* a, const void* b) {
//     Name sa=*(Name*)a;
//     Name sb=*(Name*)b;
//     int lena=strlen(sa.str);
//     int lenb=strlen(sb.str);
    
//     if(lena!=lenb) {
//         return lena-lenb;
//     } return strcmp(sa.str, sb.str);
// }

int main() {
    int n, i;
    char * arr[20001];
    char * temp=(char*)malloc(51);
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        arr[i]=(char*)malloc(51);
        scanf("%s", arr[i]);
    }
    QuickSort(arr, 0, n-1);
    for(i=0; i<n; i++) {
        if(strcmp(arr[i], temp)) {
            printf("%s\n", arr[i]);
            temp=arr[i];
        }
    }
    free(temp);
}