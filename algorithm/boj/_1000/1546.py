import sys

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    user_input = list(map(int, sys.stdin.readline().split()))
    li = []
    val_sum = 0
    
    for i in range(n):
        li.append(user_input[i])
    
    li.sort()
    
    for i in range(n):
        val_sum += round(li[i]/li[-1]*100, 6)
    
    print(round(val_sum/n, 6))
    

# 백준에서는 런타임에러 나는 코드
# if __name__ == "__main__":
#     n = int(sys.stdin.readline())
#     li = list(map(int, sys.stdin.readline().split()))[:4]
#     val_sum = 0
    
#     li.sort()
#     print(li)
    
#     for i in range(n):
#         val_sum += round(li[i]/li[-1]*100, 6)
    
#     print(round(val_sum/n, 6))