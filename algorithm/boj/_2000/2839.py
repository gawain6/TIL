import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    if n==0 or n==1 or n==2 or n==4 or n==7: print(-1)
    elif n%5==0: print(n//5)
    elif n%10==1: print((n-6)//5+2)
    elif n%10==2: print((n-12)//5+4)
    elif n%10==3: print((n-3)//5+1)
    elif n%10==4: print((n-9)//5+3)
    elif n%10==6: print((n-6)//5+2)
    elif n%10==7: print((n-12)//5+4)
    elif n%10==8: print((n-3)//5+1)
    elif n%10==9: print((n-9)//5+3)
    else: print(-1)
    
    # 1 ~ 2 : -1
    # 3 : 1
    # 4 : -1
    # 5 : 1
    # 6 : 3 3
    # 7 : -1
    # 8 : 5 3
    # 9 : 3 3 3
    # 10 : 5 5
    # 11 : 5 3 3
    # 12 : 3 3 3 3
    # 13 : 10 3
    # 14 : 5 3 3 3
    # 15 : 5 10
    # 16 : 10 6
    # 17 : 5 12
    # 18 : 15 3
    # 19 : 5 5 3 3 3
    # 20 : 5 5 5 5
    # 21 : 5 5 5 3 3
    # 22 : 5 5 12
    # 23 : 5 5 5 5 3
    # 24 : 5 5 5 3 3 3
    # 27 : 5 5 5 12