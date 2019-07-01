def selection_sort(arr):
    n = len(arr)
    for i in range(n-1):
        minIdx = i
        for j in range(i+1, n):
            if arr[minIdx] > arr[j]:
                minIdx = j
        arr[i], arr[minIdx] = arr[minIdx], arr[i]


if __name__ == "__main__":
    arr = [2, 5, 1, 3, 12, 8]
    selection_sort(arr)
    print(arr)