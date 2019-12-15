import sys

if __name__ == "__main__":
    while(True):
        li = list(map(int, sys.stdin.readline().split()))
        if li[0]==li[1]==li[2]==0: break
        li.sort()
        if li[0]**2+li[1]**2==li[2]**2: print("right")
        else: print("wrong")