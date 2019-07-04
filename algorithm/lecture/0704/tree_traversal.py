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
    
    inorder(node.left)
    inorder(node.right)
    print(node.data, end=' ')

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
    print('inorder: ', inorder(n1))
    print('postorder: ', postorder(n1))