from data_structure.queue import Queue
from data_structure.stack import Stack

class TreeNode:
    def __init__(self, data=None):
        self.__data = data
        self.__left = None
        self.__right = None
        
    def __del__(self):
        print(f'data of {self.__data} is deleted')
        
    @property
    def data(self):
        return self.__data
    
    @data.setter
    def data(self, data):
        self.__data = data
    
    @property
    def left(self):
        return self.__left
    
    @left.setter
    def left(self, left):
        self.__left = left
    
    @property
    def right(self):
        return self.__right
    
    @right.setter
    def right(self, right):
        self.__right = right

def preorder(cur):
    if not cur:
        return
    print(cur.data, end=' ')
    preorder(cur.left)
    preorder(cur.right)

def inorder(cur):
    pass
    
def postorder(cur):
    pass

def iter_preorder(cur):
    s = Stack()
    while True:
        while cur:
            print(cur.data, end=' ')
            s.push(cur)
            cur = cur.left
        cur = s.pop()
        if not cur:
            break
        cur = cur.right
    
def iter_inorder(cur):
    s = Stack()
    while True:
        while cur:
            s.push(cur)
            cur = cur.left
        cur = s.pop()
        if not cur:
            break
        print(cur.data, end=' ')
        cur = cur.right

def iter_postorder(cur):
    pass
    
def levelorder(cur):
    pass
    
if __name__=="__main__":
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

    #preorder(n1)
    iter_preorder(n1)
    print()

    #inorder(n1)
    iter_inorder(n1)
    print()

    #postorder(n1)
    iter_postorder(n1)
    print()

    levelorder(n1)
    print()