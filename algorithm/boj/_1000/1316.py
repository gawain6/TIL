# import sys

# if __name__ == "__main__":
#     n = int(sys.stdin.readline())
#     ret = 0
#     for i in range(n):
#         # i를 리스트에 저장
#         # i+1을 확인할 때 리스트에 존재하는 것인지 확인
#         # i != i+1 이면서 리스트에 존재하면 이 문자열은 그룹단어가 아님
#         check = []
#         prev = ''
#         s = list(sys.stdin.readline().rstrip())
#         for j in s: # happy
#             if not j in check:
#                 check.append(j)
#             elif (j in check) and (prev!=j): # j가 이전에 나왔던 문자이면서 이전 문자와 같지 않다면
#                 ret -= 1
#                 break # 그룹단어가 아니므로 빠져나감
#             prev = j
#         ret += 1 # 반복문을 종료 후 그룹단어 개수를 1 증가
#     print(ret)

if __name__ == "__main__":
    n = int(input())
    answer = 0
    for i in range(n):
        word = input()
        if list(word) == sorted(word, key=word.find):
            answer += 1
    print(answer)