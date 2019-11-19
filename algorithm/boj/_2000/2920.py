import sys

if __name__ == "__main__":
    li = list(map(int, sys.stdin.readline().split()))
    
    ASCENDING = [1, 2, 3, 4, 5, 6, 7, 8]
    DESCEDNING = [8, 7, 6, 5, 4, 3, 2, 1]
    
    if li == ASCENDING:
        print('ascending')
    elif li == DESCEDNING:
        print('descending')
    else:
        print('mixed')