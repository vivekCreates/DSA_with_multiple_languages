class Node{
    constructor(val){
        this.prev = null;
        this.data = val;
        this.next = null;
    }
}


class DoublyList{

    constructor(){
        this.head = null;
        this.tail = null;
    }

    pushFront(val){
        let newNode = new Node(val);
        if(this.head == null){
            this.head = this.tail = newNode;
            return;
        }else{
            newNode.next = this.head;
            this.head = newNode;
        }
    }
    pushBack(val){
         let newNode = new Node(val);
        if(this.head == null){
            this.head = this.tail = newNode;
            return;
        }else{
            this.tail.next = newNode;
            newNode.prev = this.tail;
            this.tail = newNode;
        }
    }

    popFront(){
        if(this.head == null){
            console.log("List is empty, You can't pop");
            return;
        }else{
            let temp = this.head;
            this.head = temp.next;
            this.head.prev = null;
        }
    }
    popBack(){
        if(this.head == null){
            console.log("List is empty, You can't pop");
            return;
        }else{
            let temp = this.head;
            while(temp.next.next){
                temp = temp.next;
            }
            temp.next = null
            this.tail = temp;
        }
    }

    print(){
        let temp = this.head;
        while (temp){
            console.log(temp.data);
            temp = temp.next;
        }
    }
}


const dl = new DoublyList();

dl.pushFront(20);
dl.pushFront(30);
dl.pushBack(10);
dl.pushBack(40);
dl.popFront();
dl.popBack();
dl.print();