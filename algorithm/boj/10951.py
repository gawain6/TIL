def sum(a, b):
    print(a+b)

if __name__=="__main__":
    while True:
        try:
            a, b = input().split()
            sum(int(a), int(b))
        except EOFError:
            break