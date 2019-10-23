def sum(t, a, b):
    print(f'Case #{t}: {a} + {b} = {a+b}')

if __name__=="__main__":
    # test_case 정수를 입력 받는다.
    # a, b를 한 줄로 입력 받고, split()으로 공백으로 구분하여 참조한다.
    # sum()을 이용해 a, b의 합을 "Case #x: A + B = C" 형식으로 출력한다.
    # for문으로 test_case만큼 반복한다.

    test_case = int(input())

    for i in range(test_case):
        a, b = input().split()
        sum(i+1, int(a), int(b))