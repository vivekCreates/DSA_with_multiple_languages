class Node:
    def __init__(self,val):
        self.prev = None
        self.data = val
        self.next = None
       
       
        
class DoublyList():
     
    def __init__(self):
        self.head = self.tail = None
    
    def push_front(self,val):
        newNode = Node(val)
        if not self.head:
            self.head = self.tail = newNode
            return
        else:
            newNode.next = self.head
            self.head = newNode
    
    def push_back(self,val):
        newNode = Node(val)
        if not self.head:
            self.head = self.tail = newNode
            return
        else:
            self.tail.next = newNode
            self.tail = newNode
            
    def pop_front(self):
        if not self.head:
            print("List is empty, You can't remove")
            return
        else:
            temp = self.head
            self.head = temp.next
            temp.next = None
            
    def pop_back(self):
        if not self.head:
            print("List is empty, You can't remove")
            return
        else:
            temp = self.head
            while temp.next.next:
                temp = temp.next
            temp.next = None
            self.tail = temp
            
    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next



dl = DoublyList()
dl.push_front(10)
dl.push_front(20)
dl.push_back(30)
dl.push_back(40)
dl.pop_front()
dl.pop_back()
dl.print_list()