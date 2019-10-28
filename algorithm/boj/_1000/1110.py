import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    x = n
    cnt = 0
    while(True):
        if cnt != 0 and x == n:
            print(cnt)
            break
        a, b = x // 10, x % 10
        x = ((x%10)*10)+((a+b)%10)
        cnt += 1