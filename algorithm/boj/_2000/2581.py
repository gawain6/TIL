import sys

# m, n <= 10,000
# m <= n
# 소수의 합과 최솟값을 출력
# 소수가 없을 경우 -1 출력

if __name__ == "__main__":
    m = int(sys.stdin.readline()) # 60
    n = int(sys.stdin.readline()) # 100
    prime_sum = 0
    prime_min = 10000
    
    for i in range(m, n+1): # 정수 값을 하나씩 가져옴
        if i==1: continue
        prime_number = i # 합할 값을 넣는 변수
        for j in range(2, i): # 2~i, 정수를 2부터 정수값 이전까지 나눠서 나머지가 0이 나오면 소수가 아님을 찾기
            if i%j==0: prime_number = 0; break # 나누어 떨어지면 합할 값을 0으로 만듬
        prime_sum += prime_number # 소수 또는 0을 합계 변수에 합침
        if prime_number!=0 and prime_min>prime_number: # 소수 최소값 정하기
            prime_min = i
    
    if prime_sum==0: print(-1)
    else:
        print(prime_sum)
        print(prime_min)