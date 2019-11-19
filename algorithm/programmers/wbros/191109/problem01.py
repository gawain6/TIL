import math

def solution(restaurant, riders, k):
    answer = 0
    
    for i in range(len(riders)):
        diagonalLength = math.sqrt( math.pow(riders[i][0], 2) + math.pow(riders[i][1], 2))
        if diagonalLength <= k:
            answer += 1
    
    return answer
    
if __name__ == "__main__":
    restaurant = [0, 0]
    riders = [[-700,0], [150,180], [500,500], [150, -800], [800, 800], [-900, 500], [-1100, 900]]
    k = 1000
    a = solution(restaurant, riders, k)
    print(a)