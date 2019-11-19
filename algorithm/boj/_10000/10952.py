def sum(a, b):
    print(a+b)

if __name__=="__main__":
    # a, b를 입력 한 줄로 받고, 공백으로 구분하여 참조한다.
    # sum()으로 a, b의 합을 출력한다.
    # 마지막 입력은 0 0 이며 합은 출력하지 않고, while문을 빠져나간다.

    while True:
        a, b = input().split()

        if a=='0' and b=='0':
            break

        sum(int(a), int(b))