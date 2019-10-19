# 어떤 노드를 선택하든 key값이 자식보다 크거나 같아야 한다.

# 공부방법
# 하나의 스도코드를 보고 구현할 수 있
# 파이썬 코드로 스도코드로 변환

class Element:
    def __init__(self, key):
        self.__key = key

    @property
    def key(self):
        return self.__key

    @key.setter
    def key(self, k):
        self.__key = k

class MinHeap:
    MIN=1024
    def __init__(self):
        self.__heapsize=0
        self.__container=[None for _ in range(MinHeap.MIN)]

    def __get_parent_idx(self, cur):
        return cur//2

    def __get_left_child_idx(self, cur):
        return cur*2

    def __get_right_child_idx(self, cur):
        return cur*2+1
    
    def is_empty(self):
        if self.__heapsize == 0:
            return True
        else:
            return False
    
    def is_full(self):
        if self.__heapsize == MinHeap.MIN:
            return True
        else:
            return False
    
    def push(self, key):
        if self.is_full():
            return
        
        self.__heapsize+=1
        # self.__container[self.__heapsize] = key
        cur_idx = self.__heapsize
        
        par_idx = self.__get_parent_idx(cur_idx)
        while cur_idx != 1 and key > self.__container[par_idx].key:
            self.__container[cur_idx] = self.__container[par_idx]
            cur_idx=par_idx
            par_idx=self.__get_parent_idx(cur_idx)
        self.__container[cur_idx]=Element(key)

    def __get_bigger_child_idx(self, cur):
        left_child_idx = self.__get_left_child_idx(cur)
        if left_child_idx > self.__heapsize:
            return None
        elif left_child_idx==self.__heapsize:
            return left_child_idx
        else:
            left_child=self.__container[left_child_idx]
            right_child=self.__container[self.__get_right_child_idx(cur)]
            if left_child.key > right_child.key:
                return left_child_idx
            else:
                return self.__get_right_child_idx(cur)

    
    def pop(self):
        if self.is_empty():
            return
        
        ret = self.__container[1]
        temp = self.__container[self.__heapsize]
        self.__heapsize-=1

        cur_idx = 1

        bigger_child_idx = self.__get_bigger_child_idx(cur_idx)
        while bigger_child_idx and temp.key < self.__container[bigger_child_idx].key:
            self.__container[cur_idx] = self.__container[bigger_child_idx]
            cur_idx = bigger_child_idx
            bigger_child_idx=self.__get_bigger_child_idx(cur_idx)
        self.__container[cur_idx]=temp
        self.__heapsize-=1
        return ret.key

    def top(self):
        if self.is_empty():
            return
        
        return self.__container[1].key # 0 아님

class PriorityQueue:
    def __init__(self):
        self.container=MinHeap()

    # 래핑 함수(wrapping)
    def enqueue(self, data):
        self.container.push(Element(data))

    def dequeue(self):
        return self.container.pop().key


if __name__ == "__main__":
    heap=MinHeap()

    heap.push(10)
    heap.push(7)
    heap.push(6)
    heap.push(15)

    for idx in range(heap._MinHeap__heapsize+1):
        elem = heap._MinHeap__container[idx]
        if elem:
            print(elem.key , end = ' ')
    print()

    while not heap.is_empty():
        print(heap.pop(), end = ' ')