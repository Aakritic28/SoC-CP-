class Node:
    def __init__(self, key):
        self.key=key
        self.left=None
        self.right=None
        
def insert(node, key):
    if node is None:
        return Node(key)
    if key<node.key:
        node.left=insert(node.left, key)
    elif key>node.key:
        node.right=insert(node.right, key)
    return node
#inorder traversal(imp)
def inorder(root):
    if root is not None:
        inorder(root.left)
        print(root.key, end=" ")
        inorder(root.right)
        
if __name__ == '__main__':
    root= None
    root=insert(root,50)
    insert(root, 30)
    insert(root, 20)
    insert(root, 40)
    insert(root, 70)
    insert(root, 60)
    insert(root, 80)
    inorder(root)   
    
    