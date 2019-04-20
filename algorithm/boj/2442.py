# 첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
# 별은 가운데를 기준으로 대칭이어야 한다.

# 정수 n을 입력 받는다.
# 2중 for문을 사용. 외부 for문은 n만큼 반복(reversed)
# 내부 for문은 n만큼 공백을, 나머지는 *을 출력

def func(n):
    for i in reversed(range(n)):
        for _ in range(i):
            print(' ', end='')
        for _ in range(2*(n-i)-1):
            print('*', end='')
        print('')

if __name__ == "__main__":
    n = int(input())
    func(n)