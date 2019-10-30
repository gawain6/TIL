import sys

if __name__ == "__main__":
    li = {}
    for _ in range(10):
        n = int(sys.stdin.readline())
        x = n%42
        li[x] = x
    
    print(len(li))