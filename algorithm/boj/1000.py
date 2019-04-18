def func(a, b):
    print(a+b)

if __name__ == "__main__":
    a, b = input().split()

    func(int(a), int(b))