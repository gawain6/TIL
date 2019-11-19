import sys

if __name__ == "__main__":
    li = [-1] * 26
    s = sys.stdin.readline().strip()
    
    for i in range(len(s)):
        n = ord(s[i])-97
        if li[n] == -1:
            li[n] = i
    
    [print(i, end=' ') for i in li]
    print()