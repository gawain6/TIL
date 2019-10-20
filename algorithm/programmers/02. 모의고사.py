# 풀이 1
# import math

# def solution(answers):
#     answer = []
#     count = {'0':0, '1':0, '2':0}
#     suposa = [[1, 2, 3, 4, 5], [2, 1, 2, 3, 2, 4, 2, 5], [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]]
    
#     n = len(answers)
#     for i in range(len(suposa)):
#         num = math.ceil(n / len(suposa[i]))
#         for a, b in zip(suposa[i]*num, answers):
#             if a == b:
#                 count[f'{i}'] += 1
    
#     v = int(max(count.values()))
#     for i in range(len(count)):
#         if count[f'{i}'] == v:
#             answer.append(i+1)
    
#     return answer

# 풀이 2
def solution(answers):
    pattern1 = [1, 2, 3, 4, 5]
    pattern2 = [2, 1, 2, 3, 2, 4, 2, 5]
    pattern3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    score = [0, 0, 0]
    result = []
    
    for idx, answer in enumerate(answers):
        if answer == pattern1[idx%len(pattern1)]:
            score[0] += 1
        if answer == pattern2[idx%len(pattern2)]:
            score[1] += 1
        if answer == pattern3[idx%len(pattern3)]:
            score[2] += 1
            
    for idx, s in enumerate(score):
        if s == max(score):
            result.append(idx+1)
    
    return result