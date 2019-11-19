import sys

if __name__ == "__main__":
    s = list(map(int, sys.stdin.readline().split()))
    if s[1] >= s[2]: print(-1)
    else: print(s[0] // (s[2] - s[1]) + 1)