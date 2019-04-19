# 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다.
# 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다.
# 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

# 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

# n 값을 입력 받는다.
# 공백으로 구분된 값을 입력 받고, tuple에 넣는다.
# for문으로 n개만큼 현재 값과 다음 값을 비교하여 maximum에 넣어서 최댓값 구함.
# minimum도 위와 동일한 방법으로 구함

n = int(input())
numbers = input()
tu = ()
maximum = 0
minimum = 0

tu = tuple(numbers.split())

for i in range(n):
    if i==0 or int(tu[i])>maximum:
        maximum = int(tu[i])

for i in range(n):
    if i==0 or int(tu[i])<minimum:
        minimum = int(tu[i])

if __name__ == "__main__":
    print(minimum, maximum)