class Node{
    constructor(val){
        this.data = val;
        this.left = this.right = null;
    }
}


class BST{
    constructor(){
        this.root = null;
    }

    search(target){
        return this._searchRec(this.root,target)
    }

    _searchRec(node,target){
        if (node == null){
            return false;
        }else if(target>node.data){
           return this._searchRec(node.right,target)
        }else if(target < node.data){
            return this._searchRec(node.left,target);
        }else{
            return true;
        }
    }
}

const n1 = new Node(40)
const n2 = new Node(20)
const n3 = new Node(60)
const n4 = new Node(10)
const n5 = new Node(30)
const n6 = new Node(50)
const n7 = new Node(70)
const n8 = new Node(25)
const n9 = new Node(35)
const n10 = new Node(65)

const tree = new BST()

tree.root = n1          

n1.left = n2           
n1.right = n3           

n2.left = n4          
n2.right = n5         
n5.left = n8           
n5.right = n9          

n3.left = n6           
n3.right = n7         

n7.left = n10          


const isPresent = tree.search(100);
console.log(isPresent)