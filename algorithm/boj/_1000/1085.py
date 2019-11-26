# w, h <= 1000
# 1 <= x and x <= w-1
# 1 <= y and y <= h-1

import sys

if __name__ == "__main__":
    x, y, w, h = map(int, sys.stdin.readline().split())
    width = x if (w-x)>x else w-x
    height = y if (h-y)>y else h-y
    print(height if width>=height else width)