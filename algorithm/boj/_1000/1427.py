import sys

if __name__ == "__main__":
	N = sys.stdin.readline()
	li = sorted(N)
	li.reverse()

	for i in range(len(li)-1):
		print(li[i], end='')