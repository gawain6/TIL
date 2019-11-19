import sys

if __name__ == "__main__":
    alph = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
    s = sys.stdin.readline().rstrip()
    ret = len(s)
    for i in alph:
        if i in s:
            ret -= 1*s.count(i)
    print(ret)