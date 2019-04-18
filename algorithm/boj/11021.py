def sum(t, a, b):
    print(f'Case #{t}: {a+b}')

if __name__=="__main__":
    # test_case 정수를 입력 받는다.
    # a, b를 한 줄로 입력 받고, split()으로 공백 구분하여 참조한다.
    # sum()을 이용해 합을 출력한다.
    # test_case 수 만큼 for문을 반복한다.

    test_case = int(input())

    for i in range(test_case):
        a, b = input().split()
        sum(i+1, int(a), int(b))