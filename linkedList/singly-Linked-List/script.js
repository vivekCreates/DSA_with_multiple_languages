class Node{
    constructor(val){
        this.data = val;
        this.next = null
    }
}


class List{
    constructor(){
        this.head = null
        this.tail = null
    }

    pushFront(val){
        let newNode = new Node(val);
        if(this.head==null){
            this.head =  newNode;
            this.tail = newNode;
            return;
        }else{
            newNode.next = this.head;
            this.head = newNode
        }
    }

    
    pushBack(val){
        let newNode = new Node(val);
        if(this.head == null){
            this.head = newNode;
            this.tail = newNode;
            return;
        }else{
            this.tail.next = newNode
            this.tail = newNode
        }
    }

    popFront(){
        let temp = this.head;
        this.head = temp.next;
    }

    popBack(){
        let temp = this.head;
        while(temp.next.next){
            temp = temp.next
        }
        this.tail = temp;
        this.tail.next = null;
    }

    insertAt(pos,val){
        let newNode = new Node(val);
        let temp = this.head;
        for (let i = 1; i < pos-1; i++) {
            temp  = temp.next;
        }
        newNode.next = temp.next; 
        temp.next = newNode;   
    }

    printList(){
        let temp = this.head;
        while(temp){
            console.log(temp.data)
            temp = temp.next;
        }
    }

}

const l1 = new List();
l1.pushFront(10)
l1.pushFront(20)
l1.pushFront(30)
l1.pushBack(40)
l1.pushBack(50)
l1.insertAt(2,100)
l1.printList()
