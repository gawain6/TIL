def func(a):
    if a%4 == 0 and a%400 == 0:
        print(1)
    elif a%4 == 0 and a%100 == 0:
        print(0)
    elif a%4 == 0:
        print(1)
    else:
        print(0)
    
if __name__ == "__main__":
    a = int(input())
    func(a)