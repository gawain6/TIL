import sys, math

if __name__ == "__main__":
    r = int(sys.stdin.readline())
    pi = math.acos(-1.0)
    print(f'%06f' % (pi*(r**2)))
    print(f'%06f' % (2*r*r))