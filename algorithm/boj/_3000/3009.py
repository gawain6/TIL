import sys

if __name__ == "__main__":
    li_x = []
    li_y = []
    coordinate = [0, 0]
    for i in range(3):
        x, y = map(int, sys.stdin.readline().split())
        li_x.append(x)
        li_y.append(y)
    for i in range(3):
        if li_x.count(li_x[i])==1: coordinate[0] = li_x[i]
        if li_y.count(li_y[i])==1: coordinate[1] = li_y[i]
    print(coordinate[0], coordinate[1])