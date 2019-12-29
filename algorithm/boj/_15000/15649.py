import sys

arr=[]; visit=[]; sb=""

def back_tracking(n, m, d):
    if d==m:
        global sb
        for i in arr: sb+=f"{i} "
        sb+="\n"
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
    print(sb)