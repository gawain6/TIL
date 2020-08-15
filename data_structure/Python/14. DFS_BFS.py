class Node():
    def __init__(self, data):
        self.__data=data
        self.__next=None
    @property
    def data(self): return self.__data
    @data.setter
    def data(self, data): self.__data=data
    @property
    def next(self): return self.__next
    @next.setter
    def next(self, n): self.__next=n
class Stack():
    def __init__(self):
        self.top=None
    def empty(self):
        if self.top is None: return True
        else: return False
    def push(self, data):
        new_node=Node(data)
        new_node.next=self.top
        self.top=new_node
    def pop(self):
        if self.empty(): return
        cur=self.top
        self.top=self.top.next
        return cur.data
    def peek(self):
        return self.top.next
class Queue():
    def __init__(self):
        self.front=None
        self.rear=None
    def empty(self):
        if self.front is None: return True
        else: return False
    def enqueue(self, data):
        new_node=Node(data)
        if self.empty():
            self.front=new_node
            self.rear=new_node
            return
        self.rear.next=new_node
        self.rear=new_node
    def dequeue(self):
        if self.empty(): return
        cur=self.front
        self.front=self.front.next
        return cur.data
    def peek(self):
        return self.front.data
class TreeNode():
    def __init__(self, data):
        self.__data=data
        self.__left=None
        self.__right=None
    def __del__(self):
        print(f"data of {self.__data} is deleted")
    @property
    def data(self): return self.__data
    @data.setter
    def data(self, data): self.__data=data
    @property
    def left(self): return self.__left
    @left.setter
    def left(self, left): self.__left=left
    @property
    def right(self): return self.__right
    @right.setter
    def right(self, right): self.__right=right

def iter_preorder(cur):
    s=Stack()
    while True:
        while cur:
            print(cur.data, end=' ')
            s.push(cur)
            cur=cur.left
        cur=s.pop()
        if not cur: break
        cur=cur.right
def iter_inorder(cur):
    s=Stack()
    while True:
        while cur:
            s.push(cur)
            cur=cur.left
        cur=s.pop()
        if not cur: break
        print(cur.data, end=' ')
        cur=cur.right
def iter_postorder(cur):
    s1=Stack()
    s2=Stack()
    
    s1.push(cur)
    while not s1.empty():
        cur=s1.pop()
        s2.push(cur)
        if cur.left: s1.push(cur.left)
        if cur.right: s1.push(cur.right)
    while not s2.empty():
        print(s2.pop().data, end=' ')
def levelorder(cur):
    q=Queue()
    q.enqueue(cur)
    while not q.empty():
        cur=q.dequeue()
        print(cur.data, end=' ')
        if cur.left: q.enqueue(cur.left)
        if cur.right: q.enqueue(cur.right)

def dfs(cur, search):
    s=Stack()
    s.push(cur)
    while not s.empty():
        cur=s.pop()
        if cur.left: s.push(cur.left)
        if cur.right: s.push(cur.right)
        if cur.data==search: print("great!")
    else: print("fuck!")
    
def bfs(cur, search):
    q=Queue()
    q.enqueue(cur)
    while not q.empty():
        cur=q.dequeue()
        if cur.left: q.enqueue(cur.left)
        if cur.right: q.enqueue(cur.right)
        if cur.data==search: print("great!")
    else: print("fuck!")


if __name__ == "__main__":
    n1=TreeNode(1)
    n2=TreeNode(2)
    n3=TreeNode(3)
    n4=TreeNode(4)
    n5=TreeNode(5)
    n6=TreeNode(6)
    n7=TreeNode(7)

    n1.left=n2; n1.right=n3
    n2.left=n4; n2.right=n5
    n3.left=n6; n3.right=n7
    
    bfs(n1, 8)
    print()