# n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

# n을 입력 받는다.

def func(n):
    sum = 0
    for i in range(1, n+1):
        sum += i

    return sum

if __name__ == "__main__":
    while True:
        try:
            n = int(input())
            print(func(n))
        except EOFError:
            break