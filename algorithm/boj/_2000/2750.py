# 중복되지 않은 숫자를 오름차순하는 문제

# 입력을 리스트로 받고, 정렬하여 출력한다.

import sys

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []
	for i in range(N):
		li.append(int(sys.stdin.readline()))

	for i in sorted(li):
		print(i)