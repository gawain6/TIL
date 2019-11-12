import sys

if __name__ == "__main__":
    s = list(map(int, sys.stdin.readline().split()))
    n = 2100000000
    prev_n = 0
    f = 0
    
    if s[1] > s[2]: n= -1
    else:
        while(n>=1):
            fixed_cost = s[0]+(s[1]*n)
            variable_expenses = s[2]*n
            print(f'fixed:{fixed_cost}')
            print(f'vari:{variable_expenses}')
            print(f'prev_n:{prev_n}')
            print(f'n:{n}')
            # 21억부터 내려가면 항상 가변비용이 높을 수 밖에 없음
            # 그러다 2로 나누다가 가변비용보다 고정비용이 높은 n값이 나옴
            # 이 n값을 기준으로 n값을 높여보면 다시 가변비용이 높아지는 때가 있는데 이 때가 손익분기점임
            if fixed_cost > variable_expenses: n = int(n*1.2); f = 1
            elif f == 1 and fixed_cost <= variable_expenses: break
            else: prev_n = n; n //= 2
            
    while(variable_expenses>fixed_cost):
        n -= 1
        fixed_cost = s[0]+(s[1]*n)
        variable_expenses = s[2]*n
        print(f'fixed:{fixed_cost}')
        print(f'vari:{variable_expenses}')
        print(f'n:{n}')
    n += 1
    # print(n)
    print('========final==========')
    fixed_cost = s[0]+(s[1]*n)
    variable_expenses = s[2]*n
    print(f'fixed:{fixed_cost}')
    print(f'vari:{variable_expenses}')
    print(f'n:{n}')