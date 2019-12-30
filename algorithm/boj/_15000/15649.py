import sys

arr=[]; visit=[]

def back_tracking(n, m, d):
    if d==m:
        for i in arr: print(i, end=' ')
        print()
        return
    
    for i in range(1, n+1):
        if not visit[i]:
            visit[i]=True
            arr[d]=i
            back_tracking(n, m, d+1)
            visit[i]=False
    return

if __name__ == "__main__":
    n, m = map(int, sys.stdin.readline().split())
    arr=[0]*m; visit=[0]*(n+1)
    back_tracking(n, m, 0)
    
# p=[1, 2, 1, 3, 1, 4, 2, 1, 2, 3, 2, 4, 3, 1, 3, 2, 3, 4, 4, 1, 4, 2, 4, 3]
# n=4 m=2
# visit[5]= [0, False, False, False, False]
# arr[2]= [4, 3]