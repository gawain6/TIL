#!/home/named/PycharmProjects/crawler_example/venv/bin/python
# 로또 예상 번호 5 게임 출력하기
import random

# 1. 랜덤하게 숫자 뽑아서 채우기
numbers = []
while len(numbers)<6:
    number = random.randint(1,45)
    if number not in numbers:
        numbers.append(number)

# 1-1. 리스트 대신 셋
numbers = set()
while len(numbers)<6:
    number = random.randint(1,45)
    numbers.add(number)

# 2. 원본을 만들어 두고 랜덤하게 몇 개 뽑는 방법
original_numbers = [x for x in range(1,46)]
numbers = random.sample(original_numbers, 6)
random.shuffle(original_numbers)
numbers = original_numbers[:6]
# numbers = original_numbers[:-6]

print("Content-type: text/html;charset=utf-8\n")
print("<html><head><title>로또번호</title></head><body>"+str(numbers)+"</body></html>")