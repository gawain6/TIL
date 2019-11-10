import sys

if __name__ == "__main__":
    s = list(map(int, sys.stdin.readline().split()))
    for i in range(len(s)):
        s[i] = (s[i]//100)+((s[i]//10)%10)*10+(s[i]%10)*100
    print(s[0] if s[0]>s[1] else s[1])