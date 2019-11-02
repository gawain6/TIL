def d(n):
    a = n//10000
    b = (n%10000)//1000
    c = ((n%10000)%1000)//100
    d = (((n%10000)%1000)%100)//10
    e = (((n%10000)%1000)%100)%10
    li.append(n+a+b+c+d+e)

if __name__ == "__main__":
    li = []
    n = 10000
    
    for i in range(1, n+1):
        d(i)
    
    li.sort()
    ex_li = list(set(li))
        
    for i in range(1, n+1):
        if i == ex_li[0]:
            ex_li.pop(0)
        else:
            print(i)