import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    numbers = list(map(int, sys.stdin.readline().split()))
    cnt = 0
    
    for i in range(n):
        if i==1:
            cnt -=1; continue
        elif i==2 or i==3 or i==5 or i==7:
            cnt +=1; continue
        for j in range(2, i):
            if i%j==0: 
                cnt -= 1; break
        cnt += 1
        
    print(cnt)
    # 3 5 7 11 13 17 19