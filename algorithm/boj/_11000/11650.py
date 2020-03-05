import sys

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []

	for _ in range(N):
		x, y = map(int, sys.stdin.readline().split())
		li.append([x, y])

	for i in sorted(li):
		print(i[0], i[1])