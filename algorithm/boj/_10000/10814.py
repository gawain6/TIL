import sys

# 나이 오름차순으로 정렬
# 나이가 같으면 가입한순으로 정렬

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []

	for i in range(N):
		age, name = map(str, sys.stdin.readline().split())
		li.append([int(age), i, name])

	for i in sorted(li):
		print(i[0], i[2])