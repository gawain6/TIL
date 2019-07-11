class TreeNode:
    def __init__(self, key=None):
        self.__key=key
        # self.__item=item
        self.__left=None
        self.__right=None

    @property
    def key(self):
        return self.__key
    
    @key.setter
    def key(self, key):
        self.__key = key

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

class BST:
    def __init__(self):
        self.__root=None

    @property
    def root(self):
        return self.__root

    def preorder(self, cur):
        if not cur:
            return
        
        print(cur.key, end=' ')
        self.preorder(cur.left)
        self.preorder(cur.right)

    def insert(self, key):
        new_node=TreeNode(key)

        cur=self.__root
        if not cur:
            self.__root=new_node
            return

        while True:
            parent=cur
            if key < cur.key:
                cur=cur.left
                if not cur:
                    parent.left=new_node
                    return
            else:
                cur=cur.right
                if not cur:
                    parent.right=new_node
                    return

    def search(self, target):
        cur=self.__root
        while cur:
            if cur.key==target:
                return cur
            elif cur.key < target:
                cur = cur.right
            else:
                cur = cur.left

        return None # cur 반환도 상관 없음
    
    def delete(self, target):
        """
        1. 리프노드
        2. 자식이 하나 (왼, 오)
        3. 자식이 둘
        """
        self.__root = self.__delete_recursion(self.__root, target)
    
    # 재귀함수
    # delete : 자료구조에서 데이터를 지우고 반환하지 않음
    # remove : 자료구조에서 데이터를 지우고 데이터 반환
    def __delete_recursion(self, cur, target):
        # base case
        if not cur:
            return None
        elif target < cur.key:
            cur.left = self.__delete_recursion(cur.left, target)
        elif target > cur.key:
            cur.right = self.__delete_recursion(cur.right, target)
        else:
            # 삭제 노드가 리프 노드인 경우
            if not cur.left and not cur.right:
                cur = None
            # 삭제 노드의 자식이 왼 쪽만 있을 때
            elif not cur.right:
                cur = cur.left
            # 삭제 노드의 자식이 오른쪽만 있을 때
            elif not cur.left:
                cur = cur.right
            # 삭제 노드의 자식이 둘일 때
            else:
                # 대체 노드를 찾는다.
                rep = cur.left
                while rep.right:
                    rep=rep.right
                # 삭제 노드와 대체 노드의 키를 교환
                cur.key, rep.key = rep.key, cur.key
                
                cur.left = self.__delete_recursion(cur.left, rep.key)

        return cur

if __name__ == "__main__":
    bst = BST()

    bst.insert(6)
    bst.insert(3)
    bst.insert(8)
    bst.insert(2)
    bst.insert(4)
    bst.insert(9)
    bst.insert(10)
    
    bst.insert(11)

    bst.preorder(bst.root)
    print()
    bst.insert(5)
    bst.preorder(bst.root)

    print()
    ret = bst.search(13)
    if ret:
        print(f'{ret.key} is find')
    else:
        print(f'not found')

    print()
    # 삭제노드가 리프노드일 때
    bst.delete(9)
    bst.preorder(bst.root)