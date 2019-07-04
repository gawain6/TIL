# 일단 디바이드 후 컨쿼
# O(n log n)

def merge(arr, start, mid, end):
    left = start
    right = mid+1
    temp = []

    # 둘 중에 하나라도 범위를 벗어나기 전까지
    while left<=mid and right<=end:
        if arr[left]<arr[right]:
            temp.append(arr[left])
            left+=1
        else:
            temp.append(arr[right])
            right+=1

    # 만약에 남아 있는 left라면 temp에 넣는다
    while left<=mid:
        temp.append(arr[left])
        left+=1

    while right<=end:
        temp.append(arr[right])
        right+=1
        
    # arr에 temp를 업데이트 하는 코드
    arr[start:end+1] = temp

def merge_sort(arr, start, end):
    #base case
    if start >= end:
        return
    
    mid = (start+end)//2

    # devide 먼저 함
    merge_sort(arr, start, mid)
    merge_sort(arr, mid+1, end)

    # conquer
    merge(arr, start, mid, end)

if __name__ == "__main__":
    arr = [5, 2, 7, 1, 6, 3]
    merge_sort(arr, 0, len(arr)-1)
    print(arr)
