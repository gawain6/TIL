def solution(infos, actions):
    answer = []
    login = False
    cart = []
    
    for i in range(len(actions)):
        li = actions[i].split(" ")
        command = li[0]
        if command == "LOGIN":
            if login == False:
                for j in range(len(infos)):
                    if infos[j] == f'{li[1]} {li[2]}':
                        login = True
                        answer.append(True)
                        break
                if login == False:
                    answer.append(False)
            else:
                answer.append(False)
        elif command == "ADD":
            if login == True:
                cart.append(li[1])
                answer.append(True)
            else:
                answer.append(False)
        else:
            if login == True and cart:
                cart.pop(0)
                answer.append(True)
            else:
                answer.append(False)
    
    return answer

if __name__ == "__main__":
    infos = ["kim password", "lee abc"]
    actions = [
        "LOGIN lee abc", 
        "LOGIN kim password"
    ]
    print(solution(infos, actions))