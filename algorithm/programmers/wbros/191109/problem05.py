def solution(history):
    # 레시피: 돼지 족 4kg, 양파 50g, 대파 10cm, 마늘 10g, 고추 4g
    # 상품 가격: 돼지 족(10kg당) 10000원, 양파(100g) 3000원, 대파(30cm) 1000원, 마늘(50g) 2000원, 고추(10g) 1000원
    # 현재 냉장고 상태: 돼지 족 5kg, 양파 100g, 대파 10cm, 마늘 5g, 고추 2g
    recipe = [4, 50, 10, 10, 4]
    price = [[10, 10000], [100, 3000], [30, 1000], [50, 2000], [10, 1000]]
    ingredient = [5, 100, 10, 5, 2]
    answer = []
    
    for i in range(len(history)):
        if history[i]==0.0 or history[i]==0.5:
            answer = [-1]
            return answer
        price_sum = 0
        for j in range(len(ingredient)):
            if recipe[j]*float(history[i]) > ingredient[j]:
                ingredient[j] += price[j][0]
                price_sum += price[j][1]
            ingredient[j] -= recipe[j]*float(history[i])
        answer.append(price_sum)
        
    return answer
    
if __name__ == "__main__":
    # history = [1.0, 2.0, 1.5]
    history = [1.0, 2.0, 0.0, 1.0]
    print(solution(history))