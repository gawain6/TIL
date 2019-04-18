def sum(a, b):
    print(a+b)

if __name__=="__main__":
    test_case = int(input())

    for i in range(test_case):
        a, b = input().split()
        sum(int(a), int(b))