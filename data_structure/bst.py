class TreeNode:
    def __init__(self, key):
        self.__key=key
        self.__left=None # 왼쪽 자식
        self.__right=None # 오른쪽 자식

    def __del__(self):
        print(f'deleted key:{self.__key}')

    @property
    def key(self):
        return self.__key

    @key.setter
    def key(self, key):
        self.__key=key

    @property
    def left(self):
        return self.__left

    @left.setter
    def left(self, key):
        self.__left=key

    @property
    def right(self):
        return self.__right

    @right.setter
    def right(self, key):
        self.__right=key

class BST:
    def __init__(self):
        self.root=None

    def get_root(self):
        return self.root

    def preorder(self, cur, func):
        if not cur:
            return

        func(cur)
        self.preorder(cur.left, func)
        self.preorder(cur.right, func)

    def insert(self, key):
        new_node=TreeNode(key)

        cur=self.root
        if not self.root:
            self.root=new_node
            return

        while True:
            par=self.root
            if cur.key>key:
                cur=cur.left
            else:
                cur=cur.right

            if not cur:
                par=cur
            else:
                
        # new_node=TreeNode(key)

        # cur=self.root
        # if not cur:
        #     self.root=new_node
        #     return

        # while True:
        #     parent=cur
        #     if key < cur.key:
        #         cur=cur.left
        #         if not cur:
        #             parent.left=new_node
        #             return
        #     else:
        #         cur=cur.right
        #         if not cur:
        #             parent.right=new_node
        #             return 
                
    def search(self, target):
        cur=self.root
        while cur:
            if cur.key==target:
                return cur
            elif cur.key > target:
                cur=cur.left
            elif cur.key < target:
                cur=cur.right
        return cur

    def __remove_recursion(self, cur, target):
        # base case 1
        if not cur:
            return None, None
        elif target<cur.key:
            cur.left, rem=self.__remove_recursion(cur.left, target)
        elif target>cur.key:
            cur.right, rem=self.__remove_recursion(cur.right, target)
        # 지우려는 노드를 찾았다
        else:
            if not cur.left and not cur.right: # 삭제할 노드가 리프 노드일 경우
                rem=cur
                cur=None
            elif not cur.right: # 자식이 왼쪽만 있을 때
                rem=cur
                cur=cur.left
            elif not cur.left: # 자식이 오른쪽만 있을 때
                rem=cur
                cur=cur.right
            else: # 자식이 둘일 때
                replace=cur.left
                while replace.right:
                    replace=replace.right
                cur.key, replace.key=replace.key, cur.key # 삭제 노드와 대체 노드의 키를 교환
                cur.left, rem=self.__remove_recursion(cur.left, replace.key)
        return cur, rem

    def remove(self, target):
        self.root, removed=self.__remove_recursion(self.root, target)
        if removed:
            removed.left=removed.right=None
        return removed

if __name__=="__main__":
    print('*'*100)
    bst=BST()

    bst.insert(6)
    bst.insert(3)
    bst.insert(2)
    bst.insert(4)
    bst.insert(5)
    bst.insert(8)
    bst.insert(10)
    bst.insert(9)
    bst.insert(11)

    f=lambda x: print(x.key, end='  ')

    bst.preorder(bst.get_root(), f)
    print()

    print('searched key : {}'.format(bst.search(8).key))

    # bst.remove(9)
    # bst.remove(8)
    bst.remove(6)

    print(bst.remove(15))

    bst.preorder(bst.get_root(), f)
    print()
    print('*'*100)