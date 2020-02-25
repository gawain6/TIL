import sys

if __name__ == "__main__":
    N = int(sys.stdin.readline())
    weight = []
    height = []
    
    for i in range(N):
        x, y = map(int, sys.stdin.readline().split(" "))
        weight.append(x)
        height.append(y)
    
    for i in range(N):
        rank = 1
        for j in range(N):
            if weight[i] < weight[j] and height[i] < height[j]: rank += 1
        print(rank, end=" ")