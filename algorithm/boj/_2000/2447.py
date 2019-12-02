import sys

def stars(l, c, n):
    # if c==n: return
    # for i in range(n):
    #     # if (c>=n/3 and c<(n/3)*2) and (i>=n/3 and i<(n/3)*2): print(' ', end='')
    #     # if (c>=n/9 and c<(n/9)*2) and (i>=n/9 and i<(n/9)*2): print(' ', end='')
    #     # if (c>=n/27 and c<(n/27)*2) and (i>=n/27 and i<(n/27)*2): print(' ', end='')
    #     # elif (i%3==1) and (c%3==1): print(' ', end='')
    #     print('*', end='')
    # print()
    # stars(c+1, n)
    if l==n or c==1: return
    
    if l==0:
        for _ in range(n//3):
            stars(l, c//3, n)
    if c==3:
        for i in range(c): # 9
            # if (l>=c/3 and l<(c/3)*2) and (i>=c/3 and i<(c/3)*2): print(' ', end='')
            if (l%3==1) and (i>=c/3 and i<(c/3)*2): print(' ', end='')
            else: print('*', end='')
        return
    print()
    stars(l+1, c, n)
    
if __name__ == "__main__":
    # n = int(sys.stdin.readline())
    n = 9
    stars(0, n, n)
    
    # 3, 9, 27, 81, ... 2187

# ***
# * *
# ***

# ********* 0
# * ** ** *  1  // 1 4 7
# ********* 2
# ***   *** 3
# * *   * *  4
# ***   *** 5
# ********* 6
# * ** ** *  7
# *********

# ***************************