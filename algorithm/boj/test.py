import random

def bubble_sort(li):
    pass

def insertion_sort(li):
    pass
    
if __name__=="__main__":
    while True:
        num_data=int(input('데이터 개수(종료:0):'))
        if not num_data:
            break
        b_data=[random.randint(1, 100) for _ in range(num_data)]
        i_data=[random.randint(1, 100) for _ in range(num_data)]
        print(b_data)
        bubble_sort(b_data)
        print(b_data)
        
        print(i_data)
        bubble_sort(i_data)
        print(i_data)