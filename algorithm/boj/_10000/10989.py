import sys

# 0부터 A 수열의 최대 값까지 각 카운트를 구함
# A 수열 인덱스의 값을 인덱스, 카운트를 값으로 해서 cnt 리스트에 넣음
# B 수열에 A 수열 끝 인덱스부터 카운트를 인덱스로 해서 값을 넣음

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = [0]*10001

	for _ in range(N):
		li[int(sys.stdin.readline())] += 1

	for i in range(len(li)):
		print(f'{i}\n' * li[i], end='')
