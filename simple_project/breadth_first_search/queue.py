import copy

class Queue():
    def __init__(self):
        self.li=[]
        self.d_szie=0

    def empty(self):
        if self.d_szie==0:
            return True
        else:
            return False
    
    def enqueue(self, li):
        for i in range(len(li)):
            self.li.append(li[i])
            self.d_szie+=1

    def dequeue(self):
        self.d_szie-=1
        return self.li.pop(0)

    def peek(self):
        return self.li[0]