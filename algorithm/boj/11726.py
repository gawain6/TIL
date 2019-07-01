# dp[4] = 2
# dp[5] = 3 -> dp[4] + 1
# dp[6] = 2
# dp[7] = 3 -> dp[6] + 1
# dp[8] = 3
# dp[9] = 2
# dp[10] = 3
# dp[11] = 4 -> dp[10] + 1
# dp[12] = 3
# dp[13] = 4
# dp[14] = 4
# dp[15] = 4
# dp[16] = 4
# dp[30] = 4
# dp[94] = 7
# dp[321] = 9
# dp[500] = 9
# dp[100000] = 18

dp = [0, 0, 1, 1] # dp[0], dp[1], dp[2], dp[3] 초기화
def function(n):
    for i in range(4, n+1):
        prev = dp[i-1]

        if i%3==0: # 3으로 나눠지면
            dp.append(min(dp[i//3], prev) + 1)
        elif i%2==0:
            dp.append(min(dp[i//2], prev) + 1)
        else: # -1 빼기
            dp.append(dp[i-1]+1)
        
    print(dp[n])
    
if __name__ == "__main__":
    n = int(input())
    function(n)