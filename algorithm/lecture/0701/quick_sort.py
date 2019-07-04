# pivot을 기준으로 파티션을 나눔
# pivot의 왼 쪽은 작은 값이, 오른 쪽은 크거나 같은 값으로 정리한다.
# 먼저 퀀커 후 디바이드
# O(n log n)

def quick_sort(arr, start, end):
    # base case
    if start >= end:
        return
    
    left = start
    right = end
    pivot = arr[(left+right)//2]

    # left와 right가 교차하기 전이라면~
    while left <= right:
        # left가 언제 멈춰야 하나?
        while arr[left] < pivot:
            left+=1
        
        # right가 언제 멈춰야 하나?
        while arr[right] > pivot:
            right-=1

        # left와 right가 교차하지 않았다면~
        if left <= right:
            # 교환
            arr[left], arr[right]=arr[right], arr[left]
            left+=1
            right-=1
    
    quick_sort(arr, start, right)
    quick_sort(arr, left, end)

if __name__ == "__main__":
    arr = [2, 5, 13, 7, 4, 3, 12, 9, 8]
    quick_sort(arr, 0, len(arr)-1)
    print(arr)