import sys

if __name__ == "__main__":
    li = []
    
    for i in range(9):
        li.append(int(sys.stdin.readline()))
    
    sort_list = sorted(li)
    max_value = sort_list[-1]
    
    for i in range(len(li)):
        if li[i] == max_value:
            idx = i
    
    print(max_value)
    print(idx+1)