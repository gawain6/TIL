import random

def bubble_sort(li):
    n=len(li)
    for i in range(n-1):
        for j in range(n-i-1):
            if li[j] > li[j+1]:
                li[j], li[j+1]=li[j+1], li[j]

if __name__=="__main__":
    while True:
        num_data=int(input('데이터 개수(종료:0):'))
        if not num_data:
            break
        data=[random.randint(1, 100) for _ in range(num_data)]
        print(data)
        bubble_sort(data)
        print(data)