import sys, math

# 1 ≤ H, W ≤ 99, 1 ≤ N ≤ H × W
if __name__ == "__main__":
    t = int(sys.stdin.readline())
    for i in range(t):
        h, w, n = map(int, sys.stdin.readline().split())
        if h==1: front = 1
        elif n%h==0: front = h
        else: front = n%h
        print(f'{front}{"%02d"% math.ceil(n/h)}')
        