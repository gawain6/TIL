# import sys

# # 1 ≤ M ≤ N ≤ 1,000,000
# if __name__ == "__main__":
#     m, n = map(int, sys.stdin.readline().split()) # 3 16
#     prime_list = [2, 3, 5, 7, 11, 13, 17, 19, 23]
                
#     for i in range(29, 1000, 2):
#         prime_number = 1
#         if i%2==0 or i%3==0 or i%5==0 or i%7==0: continue
#         else:
#             for j in prime_list:
#                 if i%j==0: prime_number = 0; break
#         if prime_number: prime_list.append(i)
    
#     # m~n까지 하나씩 소수인지 체크
#     for i in range(m, n+1): # 3~17
#         if i<=prime_list[-1]:
#             prime_number = 0
#             for j in prime_list:
#                 if i==j: prime_number = 1; break
#         elif i>prime_list[-1]:
#             prime_number = 1
#             for j in prime_list:
#                 if i%j==0: prime_number = 0; break
#         if prime_number: print(i)

def get_prime(n):
    if n < 2:
        return []
    n += 1
    save = [1] * (n // 2)
    for i in range(3, int(n ** 0.5) + 1, 2):
        if save[i // 2]:
            k = i * i
            save[k // 2::i] = [0] * ((n - k - 1) // (2 * i) + 1)
    return [2] + [(2 * i + 1) for i in range(1, n // 2) if save[i]]

if __name__ == "__main__":
    n, m = map(int, input().split())
    # n, m = 3, 16
    p = get_prime(m)
    for i in range(len(p)):
        if p[i] >= n:
            for j in p[i:]:
                print(j)
            break
    print(p)