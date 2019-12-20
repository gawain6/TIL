import random

def bubble_sort(li):
    n=len(li)
    for i in range(n-1):
        for j in range(n-i-1):
            if li[j]>li[j+1]:
                li[j], li[j+1]=li[j+1], li[j]

def insertion_sort(li):
    n=len(li)
    temp=None
    for i in range(1, n):
        temp=li[i]
        for j in range(i-1, -2, -1):
            if j==-1: break
            if li[j]>temp: li[j+1]=li[j]
            else: break
        li[j+1]=temp

def merge(li, start, mid, end):
    merged=[]
    left_idx=start; right_idx=mid+1
    while left_idx<=mid and right_idx<=end:
        if li[left_idx]<li[right_idx]:
            merged.append(li[left_idx])
            left_idx+=1
        else:
            merged.append(li[right_idx])
            right_idx+=1
    while left_idx<=mid:
        merged.append(li[left_idx])
        left_idx+=1
    while right_idx<=end:
        merged.append(li[right_idx])
        right_idx+=1
    li[start:end+1]=merged

def merge_sort(li, start, end):
    if start>=end: return
    mid=(start+end)//2
    merge_sort(li, start, mid)
    merge_sort(li, mid+1, end)
    merge(li, start, mid, end)
    
def selection_sort(li):
    n=len(li)
    for i in range(n-1):
        min_idx=i
        for j in range(i+1, n):
            if li[j]<li[min_idx]:
                min_idx=j
        li[i], li[min_idx]=li[min_idx], li[i]

def quick_sort(li, start, end):
    pass
    
if __name__=="__main__":
    while True:
        num_data=int(input('데이터 개수(종료:0):'))
        if not num_data:
            break
        b_data=[random.randint(1, 100) for _ in range(num_data)]
        i_data=[random.randint(1, 100) for _ in range(num_data)]
        m_data=[random.randint(1, 100) for _ in range(num_data)]
        s_data=[random.randint(1, 100) for _ in range(num_data)]
        q_data=[random.randint(1, 100) for _ in range(num_data)]

        print(f"bubble: {b_data}")
        bubble_sort(b_data)
        print(f"bubble: {b_data}")
        
        print(f"insertion: {i_data}")
        insertion_sort(i_data)
        print(f"insertion: {i_data}")
        
        print(f"merge: {m_data}")
        merge_sort(m_data, 0, len(m_data)-1)
        print(f"merge: {m_data}")
        
        print(f"selection: {s_data}")
        selection_sort(s_data)
        print(f"selection: {s_data}")
        
        print(f"quick: {q_data}")
        quick_sort(q_data, 0, len(q_data)-1)
        print(f"quick: {q_data}")