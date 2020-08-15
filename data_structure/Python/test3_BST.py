class TreeNode:
    def __init__(self, key):
        self.__key=key
        self.__left=None
        self.__right=None
    def __del__(self):
        print(f'key {self.__key} is deleted')
    @property
    def key(self): return self.__key
    @key.setter
    def key(self, key): self.__key=key
    @property
    def left(self): return self.__left
    @left.setter
    def left(self, left): self.__left=left
    @property
    def right(self): return self.__right
    @right.setter
    def right(self, right): self.__right=right
class BST:
    pass
            
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

    bst.preorder_traverse(bst.get_root(), f)
    print()

    print('searched key : {}'.format(bst.search(8).key))

    #bst.remove(9)
    #bst.remove(8)
    #bst.remove(6)

    print(bst.remove(15))

    bst.preorder_traverse(bst.get_root(), f)
    print()
    print('*'*100)