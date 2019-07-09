from queue import *

# 파이썬에서 지원하지 않는 스택을 ㅆ는 이유? 스택은 라이포(LIFO)로 구현되어 있기 때문에 스택은 추상화를 위해 사용한다.
# 파이썬에서 스택은 미지원인데, Queue를 지원하는 이유는? 스택은 어펜드, 팝으로 성능이 좋게 뽑을 수 있는데, 동적 배열의 단점(큐의 디큐를 할 경우 O(n)이니까!). 즉 성능상 이슈 때문에.

class Stack:
    def __init__(self):
        self.container=list()
    
    def is_empty(self):
        if not self.container:
            return True
        else:
            return False

    # 래핑 함수(있는 함수를 재정의 한다)
    def push(self, data):
        self.container.append(data)

    def pop(self):
        return self.container.pop()

    def peek(self):
        return self.container[-1]



# travelsal(순회)
# 재방문 없이 어떤 자료구조의 모든 데이터(노드) 방문하는 것

# sorting
# comparison sort
# O(n^2) : bubble, insertion, selection
# O(n log n) : merge, quick sort

# 동적 배열 vs 연결 리스트
# 이진트리 순회 : preorder, inorder, postorder

class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def preorder(node):
    # base case
    if not node:
        return

    # 방문
    print(node.data, end=' ')
    # 왼쪽 자식
    preorder(node.left)
    # 오른쪽 자식
    preorder(node.right)

def inorder(node):
    # base case
    if not node:
        return
    
    inorder(node.left)
    print(node.data, end=' ')
    inorder(node.right)

def postorder(node):
    # base case
    if not node:
        return
    
    postorder(node.left)
    postorder(node.right)
    print(node.data, end=' ')

def iter_preorder(cur):
    s=Stack()

    while True:
        while cur:
            print(cur.data, end = ' ')
            s.push(cur)
            cur=cur.left
        if s.is_empty():
            break
        cur=s.pop()
        cur=cur.right


def iter_inorder(cur):
    s=Stack()

    while True:
        while cur:
            s.push(cur)
            cur=cur.left
        if s.is_empty():
            break
        cur=s.pop()
        print(cur.data, end = ' ')
        cur=cur.right

def iter_postorder(cur):
    # s1, s2 스택 2가지가 필요
    # s2 에는 현재 cur node를 집어 넣고, s1에는 cur node의 자식 노드 왼쪽, 오른쪽 순으로 스택을 쌓음

    s1 = Stack()
    s2 = Stack()

    s1.push(cur)
    while not s1.is_empty():
        cur = s1.pop()
        s2.push(cur)
        
        if cur.left:
            s1.push(cur.left)
        if cur.right:
            s1.push(cur.right)
        
    while not s2.is_empty():
        cur = s2.pop()
        print(cur.data, end=' ')

def levelorder(cur):
    q = Queue()
    
    q.put(cur)
    while not q.empty():
        while not q.empty():
            cur=q.get()
            print(cur.data, end=' ')
            if cur.left:
                q.put(cur.left)
            if cur.right:
                q.put(cur.right)

if __name__ == "__main__":
    n1 = TreeNode(1)
    n2 = TreeNode(2)
    n3 = TreeNode(3)
    n4 = TreeNode(4)
    n5 = TreeNode(5)
    n6 = TreeNode(6)
    n7 = TreeNode(7)

    n1.left=n2
    n1.right=n3
    n2.left=n4
    n2.right=n5
    n3.left=n6
    n3.right=n7

    print('preorder: ', preorder(n1))
    print('iter_preorder: ', iter_preorder(n1))

    print('')

    print('inorder: ', inorder(n1))
    print('iter_inorder: ', iter_inorder(n1))

    print('')

    print('postorder: ', postorder(n1))
    print('iter_postorder: ', iter_postorder(n1))

    print('')

    print('queue: ', levelorder(n1))