dp = [1, 2] # dp[0], dp[1] 초기화

def function(n):
    if dp[n-1]:
        print(dp[n-1])
    else:
        pass
            

if __name__ == "__main__":
    n = int(input())
    function(n)

    print('dd', dp[n])