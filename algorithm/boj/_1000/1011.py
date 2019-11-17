# import sys

# if __name__ == "__main__":
#     t = int(sys.stdin.readline())
#     for i in range(t):
#         li = list(map(int, sys.stdin.readline().split()))
#         k = increase = 1
#         prev = distance = 0
#         for cnt in range(1, 100000):
#             distance = li[0] + k
#             if distance==li[1]: break
#             elif (li[1]-li[0])%2!=0 and distance-1==li[1]: break
#             elif distance > li[1]:
#                 while(distance>prev):
#                     distance-=1
#                     if distance==li[1]: break
#                 break
#             else:
#                 if cnt%2==0: increase+=1
#                 k+=increase
#                 prev = distance
            
#         if (li[1]-li[0])%2!=0: distance-=1
#         print(cnt)
    
    # c = [k]
    # 1 = 1 [1]
    # 2 = 1 1 [2] +1
    # 3 = 1 2 1 [4] +3::2
    # 4 = 1 2 2 1 [6] +5::2
    # 5 = 1 2 2 1 1 [7]
    # 5 = 1 2 2 2 1 [8]
    # 5 = 1 2 3 2 1 [9] +8::3
    # 6 = 1 2 3 3 2 1 [12] +11::3
    # 7 = 1 2 3 4 3 2 1 [16] +15::4
    # 8 = 1 2 3 4 4 3 2 1 [20] +19::4
    # 9 = 1 2 3 4 5 4 3 2 1 [25] +24::5
    #10 = 1 2 3 4 5 5 4 3 2 1 [30] +29::5
    #?? = 1 2 
    
import math, sys

if __name__ == "__main__":
    t = int(sys.stdin.readline())
    for i in range(t):
        x, y = map(int, sys.stdin.readline().split()) # 0 3
        r = math.floor(math.sqrt(y-x)+0.5) # r = 2
        if y-x <= r**2: # 3 <= 4
            print(r*2-1) # 3
        else:
            print(r*2)