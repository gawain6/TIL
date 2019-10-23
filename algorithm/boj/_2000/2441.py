# 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
# 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

# 정수 n을 입력 받는다.
# 2중 for문으로 외부 for문은 n만큼 반복, 내부 for문으로 n만큼 *을 출력한다.

def func(n):
    for i in reversed(range(n)):
        string = ''
        for _ in range(i+1):
            string += '*'
        print(f'{string:>{n}}')

if __name__ == "__main__":
    n = int(input())
    func(n)