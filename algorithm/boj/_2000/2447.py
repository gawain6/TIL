import sys

def stars(n):
    if n==0: return
    for i in range(n):
        cnt = 1
        for _ in range(n):
            if i%2!=0 and cnt==0: print(' ', end=''); cnt=3
            else: print('*', end='')
            cnt-=1
        print()
    
if __name__ == "__main__":
    n = int(sys.stdin.readline())
    stars(n)
    
    # 3, 9, 27, 81, ... 2187

# ***
# * *
# ***

# *********
# * ** ** *
# *********
# *********
# * ** ** *
# *********
# *********
# * ** ** *
# *********