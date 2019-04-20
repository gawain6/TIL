# n을 입력 받는다.
# 먼저 위의 왼쪽 별 쌓기 부분을 만든다.
# 그 다음 위의 오른쪽 별 쌓기 부분을 만든다.
# 마지막으로 아래 부분을 만든다.

def func(n):
    for i in range(n):
        inner(n, i)
    for i in reversed(range(n-1)):
        inner(n, i)

def inner(n, i):
    for _ in range(i+1):
        print('*', end='')
    for _ in range(2*(n-i)-2):
        print(' ', end='')
    for _ in range(i+1):
        print('*', end='')
    print('')

if __name__ == "__main__":
    n = int(input())
    func(n)