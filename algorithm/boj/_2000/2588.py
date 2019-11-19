def func(a, b):
    li = list(b)
    for i in reversed(li):
        print(a*int(i))
    
    print(a*int(b))

if __name__ == "__main__":
    a = input()
    b = input()
    
    func(int(a), b)