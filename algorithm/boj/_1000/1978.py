import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    numbers = list(map(int, sys.stdin.readline().split()))
    cnt = 0
    for i in range(n): # 0~5
        if numbers[i]==1: continue
        for j in range(2, numbers[i]): # 2~9
            if numbers[i]%j==0:
                cnt -=1 ; break
        cnt += 1
    print(cnt)