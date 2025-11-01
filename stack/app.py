class Stack:
    def __init__(self):
        self.arr = []
        self.top = -1
        
    def push(self,val):
        self.top+=1
        self.arr.append(val)
        
    def pop(self):
        if(self.top == -1):
            print("Array is empty! ")
        else:
            print("Popped: ", self.arr.pop())
            self.top-=1
           
            
            
    def print(self):
        for i in range(self.top, -1, -1):  
            print(self.arr[i])
            
    
    
s = Stack()
s.push(10)
s.push(20)
s.push(30)
s.print()
s.pop()
s.print()
            