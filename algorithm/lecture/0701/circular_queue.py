# circular queue (원형 큐)
# 1. 크기가 정해져 있는 배열(list)
# 2. head, tail
# 3. head == tail => empty
# 4. tail + 1 == head => full
# 5. tail = 

# out of index가 됐을 때 tail을 처음으로 어떻게?

# 테일은 마지막 데이터 다음을 가리킴

# ADT(Abstract Data Type, 추상 자료형)

class CQueue:
    MAXSIZE = 10
    def __init__(self):
        self.__container = [None for _ in range(CQueue.MAXSIZE)]
        self.__head = 0
        self.__tail = 0

    def is_empty(self):
        if self.__head == self.__tail:
            return True
        else:
            return False

    def is_full(self):
        next = self.__step_forward(self.__tail)
        if next == self.__head:
            return True
        return False

    def enqueue(self, data):
        if self.is_full():
            print('list full')

        self.__container[self.__tail] = data
        # 테일은 마지막 데이터의 다음을 가리킨다
        self.__tail = self.__step_forward(self.__tail)

    def dequeue(self):
        if self.is_empty():
            raise Exception("The queue is empty")
        temp = self.__container[self.__head]
        self.__head = self.__step_forward(self.__head)

        return temp

    def peek(self):
        if self.is_empty():
            raise Exception("The queue is empty")
        print(self.__container[self.__head])

    # 편의 함수
    def __step_forward(self, x):
        x += 1
        if x >= CQueue.MAXSIZE:
            x = 0
        return x

if __name__ == "__main__":
    test = CQueue()

    for i in range(8):
        test.enqueue(i)

    for i in range(5):
        print(test.dequeue(), end="   ")

    for i in range(8, 14):
        test.enqueue(i)

    while not test.is_empty():
        print(test.dequeue(), end= "   ")
    
    print()