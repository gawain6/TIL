import sys
sys.setrecursionlimit(1500)

dp = [0 for _ in range(1001)]

dp[0] = 1
dp[1] = 3

def function(n):
    if dp[n-1] > 0:
        return dp[n-1]
    else:
        ret = (function(n-1) + function(n-2)*2) % 10007
        dp[n-1] = ret
        return ret

if __name__ == "__main__":
    n = int(input())
    print(function(n))
