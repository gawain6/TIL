import math

def solution(prices, discounts):
    answer = 0
    prices.sort()
    prices.reverse()
    discounts.sort()
    discounts.reverse()
    
    iterable = discounts if len(prices)>=len(discounts) else prices
    for i in range(len(iterable)):
        prices[i] = math.ceil(prices[i] * (1.0-(0.01*discounts[i])))
    
    for i in range(len(prices)):
        answer += prices[i]
    
    return answer
    
if __name__ == "__main__":
    prices = [32000, 18000, 42500]
    discounts = [50, 20, 65]
    print(solution(prices, discounts))