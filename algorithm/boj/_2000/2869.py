import sys
import math

if __name__ == "__main__":
    a, b, v = map(int, sys.stdin.readline().split())
    # if (a-b)*((v-a)//(a-b))+a==v: print((v-a)//(a-b)+1)
    # else: print((v-a)//(a-b)+2)
    
    print(max(0, int(math.ceil((v-a)/(a-b))))+1)