import sys

if __name__ == "__main__":
    N, M = map(int, sys.stdin.readline().split())
    li = list(map(int, sys.stdin.readline().split()))
    res = 0

    for i in range(len(li)-2):
        for j in range(i+1, N):
            for k in range(j+1, N):
                s = li[i] + li[j] + li[k]
                if M == s:
                    res = s
                    break
                elif M > s and res < s: res = s
    
    print(res)