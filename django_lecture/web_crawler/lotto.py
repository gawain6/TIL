# 1. 7개 번호를 입력 받음
# 2. 랜덤으로 7개 번호를 생성
# 3. 6개 숫자 일치 1등
# 4. 5개 숫자 + 보너스 숫자 일치 2등
# 5. 5개 숫자(보너스 제외) 3등
# 6. 4개 숫자(보너스 제외) 4등
# 7. 3개 숫자(보너스 제외) 5등

import random, time

winning_numbers = []
count = 0
bonus = 0

if __name__ == '__main__':
    print('몇 장 구매하실건가요? > ', end='')
    number = input()
    user_numbers = {x:[] for x in range(int(number))}

    print('수동:1, 자동:2 > ', end='')
    mode = input()

    if mode=='1':
        for i in range(int(number)):
            print(f'{i+1}번째 장 로또 번호 입력 > ', end='')
            user_lotto = input()
            for x in user_lotto.split():
                user_numbers[i].append(int(x))
    else:
        for i in range(int(number)):
            random.seed(int(time.time()+i * 2 / 33498 * time.time()))
            user_lotto = random.sample(range(1, 46), 7)
            user_numbers[i] = user_lotto

    random.seed(int(time.time() * 2 / 33498 * time.time()))
    winning_numbers = random.sample(range(1, 46), 7)
    print('당첨번호 : ', end='')
    for i in range(6):
        print(winning_numbers[i], end=' ')
    print(f'+ {winning_numbers[-1]}')

    for i in range(int(number)):
        for j in user_numbers[i]:
            for k in winning_numbers:
                if j==k:
                    if k==winning_numbers[-1] and j==k:
                        bonus=1
                        break
                    count+=1
        if count==6:
            print(f'{user_numbers[i]}, {count}, {bonus} : 1등~')
        elif count==5 and bonus==1:
            print(f'{user_numbers[i]}, {count}, {bonus} : 2등~')
        elif count==5:
            print(f'{user_numbers[i]}, {count}, {bonus} : 3등~')
        elif count==4:
            print(f'{user_numbers[i]}, {count}, {bonus} : 4등~')
        elif count==3:
            print(f'{user_numbers[i]}, {count}, {bonus} : 5등~')
        else:
            print(f'{user_numbers[i]}, {count}, {bonus} : 꽝')
        count=0
        bonus=0