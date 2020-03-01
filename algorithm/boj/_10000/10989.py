import sys

def counting_sort(A):
    if min(A) < 0:
        raise
    i, n, k = 0, len(A), max(A)+1
    C = [0]*k
    for j in range(n):
        C[A[j]] = C[A[j]]+1
    for j in range(k):
        while C[j] > 0:
            (A[i], C[j], i) = (j, C[j]-1,i+1)

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []
	for i in range(N):
		li.append(int(sys.stdin.readline()))
	counting_sort(li)
	for i in li:
		print(i)
