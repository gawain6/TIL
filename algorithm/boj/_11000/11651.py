import sys

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []

	for _ in range(N):
		x, y = map(int, sys.stdin.readline().split())
		li.append([y, x])

	for i in sorted(li):
		print(i[1], i[0])