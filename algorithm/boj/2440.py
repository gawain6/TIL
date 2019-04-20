# 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

# 정수 n을 입력 받는다.
# 2중 for문으로 외부 for문은 n만큼 반복, 내부 for문으로 n만큼 *을 출력한다.

def func(n):
    for i in reversed(range(n)):
        for _ in range(i+1):
            print('*', end='')
        print('')

if __name__ == "__main__":
    n = int(input())
    func(n)