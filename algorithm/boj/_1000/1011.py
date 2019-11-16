import sys

if __name__ == "__main__":
    t = int(sys.stdin.readline())
    for i in range(t):
        li = list(map(int, sys.stdin.readline().split()))
        k = 1
        # k = (li[1]-li[0])//2
        for cnt in range(k, k+100000): # 0 15 , cnt=1
            distance = li[0] + k # 0 + 1 = 1
            if cnt<=2: k+=cnt # k+=
            elif cnt>2: k+=cnt-1 # k = 7 + 7 - 1 = 13
            if distance==li[1]: break # 5==15
            elif (li[1]-li[0])%2!=0 and distance-1==li[1]: break
            
        if (li[1]-li[0])%2!=0: distance-=1; print(cnt)
        else: print(cnt)
    
    # 1 5 : 1 2 4 5
    
    # 1 = 1 [1]
    # 2 = 1 1 [2]
    # 3 = 1 2 1 [4]
    # 4 = 1 2 2 1 [6]
    # 5 = 1 2 3 2 1 [9]
    # 6 = 1 2 3 3 2 1 [12]
    # 7 = 1 2 3 4 3 2 1 [16]
    # 8 = 1 2 3 4 4 3 2 1 [20]
    # 9 = 1 2 3 4 5 4 3 2 1 [25]
    #10 = 1 2 3 4 5 5 4 3 2 1 [30]