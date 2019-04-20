# n을 입력 받는다.
# 공백을 먼저 만든다.
# 먼저 별만 찍히는 것으로 만든다.
# 짝수는 *, 홀수는 공백이 출력되게 변경한다.

def func(n):
    for i in reversed(range(n)):
        for _ in range(i):
            print(' ', end='')
        for i in range(2*(n-i)-1):
            if i%2==0:
                print('*', end='')
            else:
                print(' ', end='')
        print('')

if __name__ == "__main__":
    n = int(input())
    func(n)