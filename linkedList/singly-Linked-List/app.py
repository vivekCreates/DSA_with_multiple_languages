class Node:
    def __init__(self,val):
        self.data = val
        self.next = None
        

class List:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def push_front(self,val):
        newNode = Node(val)
        if not self.head:
            self.head = self.tail = newNode
            return
        else:
            newNode.next = self.head  
            self.head  = newNode
            
    def push_back(self,val):
        newNode = Node(val)
        if not self.head:
            self.head = self.tail = newNode
            return
        else:
            self.tail.next = newNode
            self.tail = newNode
      
    def pop_front(self):
        temp = self.head
        self.head = temp.next
        
    def pop_back(self):
        temp = self.head
        while temp.next.next:
            temp = temp.next
        self.tail = temp
        self.tail.next = None
      
    def insert_at(self,pos,val):
        newNode = Node(val)
        temp = self.head
        for i in range(1,pos-1):
            temp = temp.next
        newNode.next = temp.next
        temp.next = newNode
        
    def print_list(self):
        temp = self.head 
        while temp:
            print(temp.data)
            temp = temp.next 
         
    def size(self):
        temp = self.head
        element = 0 
        while(temp):
            element+=1
            temp = temp.next
        return element  
    
    def clear(self):
        self.head = self.tail = None
  
l1 = List()


l1.push_front(1)
l1.push_front(2)
l1.push_back(3)
l1.pop_front()
l1.pop_back()
l1.insert_at(2,100)
l1.print_list()

print(l1.size())