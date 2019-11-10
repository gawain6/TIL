import sys

if __name__ == "__main__":
    dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
    s = sys.stdin.readline().rstrip()
    ret = 0
    for i in range(len(s)):
        for j in dial:
            if s[i] in j:
                ret += dial.index(j)+3
    print(ret)
    
    # 0 = 012
    # 1 = 345
    # 2 = 678