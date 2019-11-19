import sys

if __name__ == "__main__":
    t = int(sys.stdin.readline())
    for _ in range(t):
        k = int(sys.stdin.readline()) # 2
        n = int(sys.stdin.readline()) # 2
        ret = 1
        
        if k==0 or n==1: print(n)
        elif k==1:
            for i in range(1, n): # 1~2
                ret+=i+1 # ret = 0+1+1
            print(ret)
        elif k==2:
            inc = 3
            for i in range(1, n): # 1~2
                ret+=inc
                inc+=2+i
            print(ret)
        elif k==3:
            inc = 4
            for i in range(1, n):
                ret+=inc
                inc+=5+i # 10+5+2
            print(ret)
    
    # k층 n호
    # 1 <= k <= 14, 1 <= n <= 14
    
    # 3 : 01  05  15  35  70 126 210 330 @ 4 10 20 35 => 6 10 15
    # 2 : 01  04  10  20  35  56  84 120 @ 3 6 10 15
    # 1 : 01  03  06  10  15  21  28  36 @ 2 3 4 5
    # 0 : 01  02  03  04  05  06  07  08
    
    #      0  1  5 15 35 70
    #      0  1  4 10 20 35
    #      0  1  3  6 10 15
    