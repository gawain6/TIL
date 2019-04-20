# n을 입력 받는다
# 공백을 먼저 작성한다.
# 별을 출력해본다.
# 아래 부분을 만든다.

def func(n):
    for i in reversed(range(n)):
        for _ in range(i):
            print(' ', end='')
        for _ in range(n-i):
            print('*', end='')
        print('')
    for i in range(n-1):
        for _ in range(i+1):
            print(' ', end='')
        for _ in range(n-1-i):
            print('*', end='')
        print('')

if __name__ == "__main__":
    n = int(input())
    func(n)