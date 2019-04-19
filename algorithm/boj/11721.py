# 첫째 줄에 단어가 주어진다. 단어는 알파벳 소문자와 대문자로만 이루어져 있으며, 길이는 100을 넘지 않는다. 
# 길이가 0인 단어는 주어지지 않는다.

# 입력으로 주어진 단어를 열 개씩 끊어서 한 줄에 하나씩 출력한다. 
# 단어의 길이가 10의 배수가 아닌 경우에는 마지막 줄에는 10개 미만의 글자만 출력할 수도 있다.

# 길이 100을 제한하는 단어를 입력 받는다. 길이 0은 입력하지 않는다.
# string[start:end] 마다 출력
# while 무한 반복하고, end가 입력 받은 문자열보다 길어지면 남은 문자열을 출력 후 while문 종료

if __name__ == "__main__":
    string = input()
    start = 0
    end = 10

    while True:
        print(string[start:end])
        start = end
        end += 10
    
        if len(string)<=end:
            print(string[start:end])
            break