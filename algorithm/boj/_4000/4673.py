def d(n):
    dn = n
    while(n!=0):
        dn += n%10
        n //= 10
    return dn

if __name__ == "__main__":
    li = [1] * 10001
    
    for i in range(1, 10001):
        n = d(i) 
        if n < 10001:
            li[n] = 0
    for i in range(1, 10001):
        if li[i] == 1:
            print(i)