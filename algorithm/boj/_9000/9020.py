import sys

def get_prime():
    limit = 10000
    is_prime = [0] + [0] + [1] * (limit-2)
    for i in range(2, len(is_prime)):
        if is_prime[i]:
            for j in range(i+i, len(is_prime), i): is_prime[j] = 0
    return is_prime

def goldbach(n):
    for i in range(n//2, n+1):
        if is_prime[i] and is_prime[n-i]:
            print(n-i, i)
            break

if __name__ == "__main__":
    is_prime = get_prime()
    t = int(sys.stdin.readline())
    for i in range(t):
        n = int(sys.stdin.readline())
        goldbach(n)
            
    # 4 = 2, 3 >> 0, 1, 2, 3, 4
    # 8 = 2, 3, 5, 7
    # 16 = 2, 3, 5, 7, 11, 13
    # 32 = 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31
    # 38 = 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37
    # 40 = 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37
    # 