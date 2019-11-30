import sys, math

if __name__ == "__main__":
    t = int(sys.stdin.readline())
    
    for _ in range(t):
        x1, y1, r1, x2, y2, r2 = map(int, sys.stdin.readline().split())
        d = math.sqrt((x2-x1)**2+(y2-y1)**2) # 두 점 사이의 거리
        
        if x1==x2 and y1==y2 and r1==r2: print(-1) # 두 원이 일치할 때
        elif d==r1+r2: print(1) # 두 원이 외접할 때
        elif d+(r1 if r1<r2 else r2)==(r2 if r1<r2 else r1): print(1) # 두 원이 내접할 때
        elif d>r1+r2: print(0) # 두 원이 접하지 않을 때
        elif d+(r1 if r1<r2 else r2)<(r2 if r1<r2 else r1): print(0) # 한 원이 내부에 있고 접하지 않을 때
        else: print(2)