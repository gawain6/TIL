import sys

def func(n, x):
    li = list(map(int, sys.stdin.readline().split()))
    for i in range(n):
        if li[i] < x:
            print(li[i], end=' ')
    print('')

if __name__ == "__main__":
    n, x = map(int, sys.stdin.readline().split())
    func(n, x)