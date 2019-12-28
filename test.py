class Node:
    def __init__(self, data=None):
        self.__data=data
        self.__next=None

    @property
    def data(self):
        return self.__data
    
    @data.setter
    def data(self, data):
        self.__data=data
    
    @property
    def next(self):
        return self.__next

    @next.setter
    def next(self, n):
        self.__next=n
class Stack:
    def __init__(self):
        self.top=None

    def empty(self):
        if self.top is None:
            return True
        else:
            return False

    def push(self, data):
        new_node=Node(data)
        new_node.next=self.top
        self.top=new_node

    def pop(self):
        if self.empty():
            return

        cur=self.top
        self.top=self.top.next
        return cur.data

    def peek(self):
        if self.empty():
            return
            
        return self.top.data
class TreeNode:
    def __init__(self, data=None, n=1):
        self.__data=data
        self.__node=[None]*n
    def __del__(self):
        print('data {} is deleted'.format(self.__data))
    @property
    def data(self): return self.__data
    @data.setter
    def data(self, data): self.__data=data
    @property
    def node(self): return self.__node
    @node.setter
    def node(self, data, n): self.__node[n]=data

def back_tracking(cur, n, m):
    s=Stack()
    s.push(cur)
    while not s.empty():
        cur=s.pop()
        for i in range(n-1, -1, -1):
            if cur.node[i] and cur.node[i].data==cur.data: s.push(cur.node[i])
        
        if cur.node[0].data is None:
            for i in range(1, cur.data+1):
                print(i, end=' ')
            print('\n')
        else:
            print('fuc')
            
# c = 1
# s = 4 3 2 4 3 2
# p = 1

if __name__ == "__main__":
    n=4; m=2
    
    n0=TreeNode(None, n)
    n1=TreeNode(1, n)
    n2=TreeNode(2, n)
    n3=TreeNode(3, n)
    n4=TreeNode(4, n)
    
    n5=TreeNode(1, n)
    n6=TreeNode(2, n)
    n7=TreeNode(3, n)
    n8=TreeNode(4, n)
    
    n0.node[0]=n1; n0.node[1]=n2; n0.node[2]=n3; n0.node[3]=n4

    n1.node[0]=n5; n1.node[1]=n6; n1.node[2]=n7; n1.node[3]=n8
    n2.node[0]=n5; n2.node[1]=n6; n2.node[2]=n7; n2.node[3]=n8
    n3.node[0]=n5; n3.node[1]=n6; n3.node[2]=n7; n3.node[3]=n8
    n4.node[0]=n5; n4.node[1]=n6; n4.node[2]=n7; n4.node[3]=n8
    
    back_tracking(n0, n, m)
    print()