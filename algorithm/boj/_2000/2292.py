import sys

if __name__ == "__main__":
    n1 = int(sys.stdin.readline())
    n2 = 1
    for i in range(20000):
        n2 = n2+i*6
        if n1 <= n2:
            print(i+1)
            break
        
    
    # 1 : 1
    # 2 : 2 3 4 5 6 7 = 6개
    # 3 : 8 9 10 11 12 13 14 15 16 17 18 19 = 12개
    # 4 : 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 = 18개