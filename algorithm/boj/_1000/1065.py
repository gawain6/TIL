import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    
    if n<100:
        print(n)
    elif n==1000:
        print('144')
    else:
        cnt = 99
        for i in range(100, n+1):
            if i//100 + i%10 == 2*(i//10%10):
                cnt += 1
        print(cnt)