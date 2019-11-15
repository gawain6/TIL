import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    n1 = n2 = cnt = 1
    while(True):
        if n==cnt: print(f'{n1}/{n2}'); break
        elif n1==1 and n2%2!=0: n2+=1; cnt+=1 # n2가 홀수면 오른쪽 이동
        elif n1==1 and n2%2==0:
            cnt+=n2-1; n1, n2 = n2, n1
            if cnt>n:
                for _ in range(n1, 1, -1):
                    n1-=1; n2+=1; cnt-=1
                    if n==cnt: break
            
        elif n1%2!=0 and n2==1:
            cnt+=n1-1; n1, n2 = n2, n1
            if cnt>n:
                for _ in range(n2, 1, -1):
                    n1+=1; n2-=1; cnt-=1
                    if n==cnt: break
            
        elif n1%2==0 and n2==1: n1+=1; cnt+=1
        
    # n1/n2
    # 1/1 | 1/2 | 1/3 | 1/4 | 1/5
    # 2/1 | 2/2 | 2/3 | 2/4 |
    # 3/1 | 3/2 | 3/3 |
    # 4/1 | 4/2 |
    # 5/1 |
    
    # 1 = 1/1
    # 2 = 1/1 | 1/2
    # 3 = 1/1 | 1/2 | 2/1
    # 4 = 1/1 | 1/2 | 2/1 | 3/1
    # 5 = 1/1 | 1/2 | 2/1 | 3/1 | 2/2
    # 6 = 1/1 | 1/2 | 2/1 | 3/1 | 2/2 | 1/3