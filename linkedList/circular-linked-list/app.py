class Node:
    def __init__(self,val):
        self.data = val
        self.next = None
        

class CircularList:
    
    def __init__(self):
        self.head = self.tail = None
        
    def push_front(self,val):
        newNode = Node(val)
        if not self.head:
            self.head = self.tail = newNode
            self.head.next = newNode
        else:
            newNode.next = self.head
            self.head = newNode
            self.tail.next = self.head
            
    def push_back(self,val):
        newNode = Node(val)
        if not self.head:
            self.head = self.tail = newNode
            self.head.next = newNode
        else:
            self.tail.next = newNode
            self.tail = newNode
            self.tail.next = self.head
    
    def pop_front(self):
        if not self.head:
            print("List is empty, You can't remove")
            return
        else:
            temp = self.head
            self.head = temp.next
            self.tail.next = self.head
    
    
    def pop_back(self):
        if not self.head:
            print("List is empty, You can't remove")
            return
        else:
            temp = self.head
            while(temp.next.next != self.head):
                temp = temp.next
            self.tail = temp
            self.tail.next = self.head        
    
    
    
      
    def print_list(self):
        if not self.head:
            return
        
        temp = self.head
        while True:
            print(temp.data)
            temp = temp.next
            if temp == self.head:
               break
        
          
            
            
cl = CircularList()

cl.push_front(10)
cl.push_front(20)
cl.push_back(30)
cl.push_back(40)
cl.push_back(50)
cl.pop_front()
cl.pop_back()
cl.print_list()
