# bubble, insertion, selection -> insertion이 나음

# O(n^2)
def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-1-i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1]=arr[j+1], arr[j]

if __name__ == "__main__":
    arr = [2, 5, 1, 3, 12, 8]
    bubble_sort(arr)
    print(arr)