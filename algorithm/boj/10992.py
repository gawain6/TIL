# n을 입력 받는다.
# 공백을 먼저 만든다.
# 별을 출력한다.
# 끝에만 별이 출력되게 수정한다.
# 마지막 줄은 모든 별이 출력되게 수정한다.

def func(n):
    for i in reversed(range(n)):
        for _ in range(i):
            print(' ', end='')
        if i==0:
            for j in range(2*(n-i)-1):
                print('*', end='')
        else:
            for j in range(2*(n-i)-1):
                if j==0 or j==range(2*(n-i)-1)[-1]:
                    print('*', end='')
                else:
                    print(' ', end='')
        print('')

if __name__ == "__main__":
    n = int(input())
    func(n)