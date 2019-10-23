def sum(a, b):
    print(a+b)

if __name__=="__main__":
    # test_case 정수를 입력 받는다.
    # a, b를 한 줄로 입력 받고, split(',')으로 구분하여 참조한다.
    # sum()으로 합을 출력한다.
    # test_case만큼 for문으로 반복한다.

    test_case = int(input())

    for _ in range(test_case):
        a, b = input().split(',')
        sum(int(a), int(b))