import random

def bubble_sort(li):
    pass
def insertion_sort(li):
    pass
def merge_sort(li, start, end):
    pass
def selection_sort(li):
    pass
def quick_sort(li, start, end):
    pass
"""
void countingSort(int * arr, int * sorted, int size) {
    int i, j;
    int temp[10000]={0,};
    for(i=0; i<size; i++) {
        temp[arr[i]]++;
    }
    for(i=1; i<sizeof(temp)/sizeof(int); i++) {
        temp[i]+=temp[i-1];
    }
    for(i=0; i<size; i++) {
        sorted[temp[arr[i]]-1]=arr[i];
        temp[arr[i]]--;
    }
}
"""
    
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