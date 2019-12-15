import sys

if __name__ == "__main__":
    t = int(sys.stdin.readline())
    for _ in range(t):
        k = int(sys.stdin.readline())
        n = int(sys.stdin.readline())
        prev_li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14] # 이전 층의 인원 정보
        cur_li = [0] * 14 # 현재 층 인원 정보
        
        for _ in range(k): # 0~1
            s = 0 # 임시 인원의 합을 저장할 변수
            for i in range(0, n): # 0~3
                s += prev_li[i]
                cur_li[i] = s
            prev_li = cur_li
        print(cur_li[n-1])
    
    # k층 n호
    # 1 <= k <= 14, 1 <= n <= 14
    
    # 3 : 01  05  15  35  70 126 210 330
    # 2 : 01  04  10  20  35  56  84 120
    # 1 : 01  03  06  10  15  21  28  36
    # 0 : 01  02  03  04  05  06  07  08