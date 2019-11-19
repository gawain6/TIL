def solution(user, friends, visitors):
    # 사용자와 함께 아는 친구의 수 = 10점
    # 사용자의 타임 라인에 방문한 횟수 = 1점
    bf = []
    dic = {}
    for i in range(len(friends)):
        dic[friends[i][0]] = 0
        dic[friends[i][1]] = 0
    for i in range(len(visitors)):
        dic[visitors[i]] = 0

    for i in range(len(friends)):
        try:
            if friends[i].index(user):
                for j in range(len(friends[i])):
                    if friends[i][j] != user:
                        dic[friends[i][j]] += 10
                        bf.append(friends[i][j])
        except ValueError:
            continue
    
    for i in range(len(bf)):
        for j in range(len(friends)):
            try:
                if friends[j].index(bf[i])>=0:
                    for k in range(len(friends[j])):
                        if friends[j][k] != bf[i] and friends[j][k] != user:
                            dic[friends[j][k]] += 10
            except ValueError:
                continue
            
    for i in range(len(visitors)):
        dic[visitors[i]] += 1
    
    answer = []
    for k, v in dic.items():
        answer.append(v)
    answer.sort()
    answer.reverse()
    
    return answer[:3]
    
if __name__ == "__main__":
    user = 'mrko'
    friends = [ ['donut', 'andole'], ['donut', 'jun'], ['donut', 'mrko'], ['shakevan', 'andole'], ['shakevan', 'jun'], ['shakevan', 'mrko'] ]
    visitors = ['bedi', 'bedi', 'donut', 'bedi', 'shakevan']
    print(solution(user, friends, visitors))