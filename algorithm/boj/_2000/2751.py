import sys

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []
	for i in range(N):
		li.append(int(sys.stdin.readline()))
	for i in sorted(li):
		print(i)
