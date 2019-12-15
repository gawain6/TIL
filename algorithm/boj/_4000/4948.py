import sys

def get_prime(n):
    if n<2: return []
    n += 1
    save = [1] * (n//2)
    for i in range(3, int(n**0.5)+1, 2):
        if save[i//2]:
            k = i*i
            save[k//2::i] = [0] * ((n-k-1)//(2*i)+1)
    return [2] + [(2*i+1) for i in range(1, n//2) if save[i]]
    
if __name__ == "__main__":
    while(True):
        n = int(sys.stdin.readline())
        cnt = 0
        if n==0: break
        else:
            p = get_prime(2*n)
            for i in range(len(p)):
                if p[i] > n:
                    print(len(p[i:]))
                    break