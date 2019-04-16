from lstack import LStack
from lqueue import LQueue

class TreeNode:
    def __init__(self, data):
        self.__data=data
        self.__left=None # 왼쪽 자식
        self.__right=None # 오른쪽 자식

    @property
    def data(self):
        return self.__data

    @data.setter
    def data(self, data):
        self.__data=data

    @property
    def left(self):
        return self.__left

    @left.setter
    def left(self, data):
        self.__left=data

    @property
    def right(self):
        return self.__right

    @right.setter
    def right(self, data):
        self.__right=data

def preorder(cur):
    '''
    recursion function
    cur : 현재 노드
    '''
    if not cur:
        return

    # 방문 구현 : data로 출력
    print(cur.data, end=' ')
    preorder(cur.left)
    preorder(cur.right)

def inorder(cur):
    if not cur:
        return

    inorder(cur.left)
    print(cur.data, end=' ')
    inorder(cur.right)

def postorder(cur):
    if not cur:
        return

    postorder(cur.left)
    postorder(cur.right)
    print(cur.data, end=' ')

def iter_preorder(cur):
    stack=LStack()
    
    while True:
        while cur:
            print(cur.data, end=' ') # 방문: data 출력
            stack.push(cur)
            cur=cur.left
        cur=stack.pop()
        if not cur:
            break
        cur=cur.right


def iter_inorder(cur):
    stack=LStack()
    
    while True:
        while cur:
            stack.push(cur)
            cur=cur.left
        cur=stack.pop()
        if not cur:
            break
        print(cur.data, end=' ') # 방문: data 출력
        cur=cur.right

def iter_postorder(cur):
    s1=LStack()
    s2=LStack()

    s1.push(cur)
    while not s1.empty():
        cur=s1.pop()
        s2.push(cur)

        if cur.left:
            s1.push(cur.left)

        if cur.right:
            s1.push(cur.right)

    while not s2.empty():
        cur=s2.pop()
        print(cur.data, end=' ')

def levelorder(cur):
    queue=LQueue()

    queue.enqueue(cur)
    while not queue.empty():
        cur=queue.dequeue()
        print(cur.data, end=' ')

        if cur.left:
            queue.enqueue(cur.left)
        
        if cur.right:
            queue.enqueue(cur.right)

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

    print('iter_inorder')
    iter_inorder(n1)
    print(); print()

    print('iter_postorder')
    iter_postorder(n1)
    print(); print()

    print('levelorder')
    levelorder(n1)
    print()