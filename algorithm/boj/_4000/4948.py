import sys

if __name__ == "__main__":
    # while(True):
    #     n = int(sys.stdin.readline())
    #     if n==0: break
        
        
    #     print(n)
    M, N = map(int, input().split()) # 3 16 -> 3, 5, 7, 11, 13
    arr = [True] * (N+1) # arr = [True] * 17
    arr[0] = False; arr[1] = False # arr = [False, False, True, // True, True, ...]
    for i in range(2, int(N**0.5) + 1): # 2~5
        if arr[i] == True: # arr[2] == True
            for j in range(i+i, N + 1, i): 
                arr[j] = False
    
    for i in range(M, N+1):
        if arr[i] == True:
            print(i)