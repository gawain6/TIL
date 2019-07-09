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
        pass
    
    def delete(self, target):
        pass


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