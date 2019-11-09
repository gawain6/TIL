def solution(forms):
    answer = []
    for i in range(len(forms)-1):
        for j in range(len(forms[i][1])-1):
            s = forms[i][1][j:2+j]
            
            for k in range(i+1, len(forms)):
                if forms[k][1].find(s) >= 0:
                    answer.append(forms[i][0])
                    answer.append(forms[k][0])
        
        answer = list(set(answer))
        answer.sort()
    return answer
    
if __name__ == "__main__":
    forms = [ ['jm@email.com', '제이엠'], ['jason@email.com', '제이슨'], ['woniee@email.com', '워니'], ['mj@email.com', '엠제이'], ['nowm@email.com', '이제엠'] ]
    print(solution(forms))