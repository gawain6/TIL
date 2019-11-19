import sys

if __name__ == "__main__":
    t = int(sys.stdin.readline())
    
    for i in range(t):
        li = list(map(str, sys.stdin.readline().split()))
        r = int(li[0])
        s = list(li[1])
    
        for i in range(len(s)):
            print(s[i]*r, end='')
        print()