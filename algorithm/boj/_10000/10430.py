def func(a, b, c):
    print((a+b)%c)
    print((a%c+b%c)%c)
    print((a*b)%c)
    print((a%c*b%c)%c)

if __name__ == "__main__":
    a, b, c = input().split()
    func(int(a), int(b), int(c))