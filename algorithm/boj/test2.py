class Node:
    pass
class Stack:
    pass
class Queue:
    pass
class TreeNode:
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