# n을 입력 받는다.
# 공백을 먼저 작성한다.
# 역삼각형 별을 만든다.
# 밑 부분을 만든다.

def func(n):
    for i in range(n):
        inner(n, i)
    for i in reversed(range(n-1)):
        inner(n, i)

def inner(n, i):
    for _ in range(i):
        print(' ', end='')
    for _ in range(2*(n-i)-1):
        print('*', end='')
    print('')

if __name__ == "__main__":
    n = int(input())
    func(n)