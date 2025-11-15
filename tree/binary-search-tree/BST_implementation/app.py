class Node:
    def __init__(self,val,left=None,right=None):
        self.data = val
        self._left = left
        self._right = right
        
    def set_left(self,node):
        self._left = node
        
    def set_right(self,node):
        self._right = node
        


class BinarySearchTree:
    def __init__(self):
        self.root = None
        
    def search(self,target):
        node = self.root
        
        while node is not None:
            data = node.data
            
            if (target == data):
                return True
            elif (target< data):
                node = node._left
            else:
                node = node._right
                
        return False
    
    


n1 = Node(40)
n2 = Node(20)
n3 = Node(60)
n4 = Node(10)
n5 = Node(30)
n6 = Node(50)
n7 = Node(70)
n8 = Node(25)
n9 = Node(35)
n10 = Node(65)

tree =  BinarySearchTree()

tree.root = n1          

n1._left = n2           
n1._right = n3           

n2._left = n4          
n2._right = n5         
n5._left = n8           
n5._right = n9          

n3._left = n6           
n3._right = n7         

n7._left = n10          


is_present = tree.search(50)
print(is_present)
