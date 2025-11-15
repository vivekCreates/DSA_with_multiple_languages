#include <iostream>
using namespace std;



struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }

};

bool searchElement(Node* tree,int target );


int main() {
    // Creating 10 nodes
    Node* n1 = new Node(50);
    Node* n2 = new Node(30);
    Node* n3 = new Node(70);
    Node* n4 = new Node(20);
    Node* n5 = new Node(40);
    Node* n6 = new Node(60);
    Node* n7 = new Node(80);
    Node* n8 = new Node(10);
    Node* n9 = new Node(25);
    Node* n10 = new Node(65);

    Node* root = n1;

    n1->left = n2;     // 50 -> 30
    n1->right = n3;    // 50 -> 70

    n2->left = n4;     // 30 -> 20
    n2->right = n5;    // 30 -> 40

    n4->left = n8;     // 20 -> 10
    n4->right = n9;    // 20 -> 25

    n3->left = n6;     // 70 -> 60
    n3->right = n7;    // 70 -> 80

    n6->right = n10;   // 60 -> 65

    cout << "BST created successfully!" << endl;

    int target; 
    cout << "Enter the target: ";
    cin >> target;

    bool isPresent = searchElement(root,target);

     
    isPresent == 0 ? cout <<  "False": cout <<"True" ;

    return 0;
}


int run = 0;
bool searchElement(Node* tree, int target){

    if(tree == NULL){
        // cout << "Run" << run << "times";
        return false;
    }else if(target<tree->data){
        run++;
        return searchElement(tree->left,target);
    }else if(target>tree->data){
        run++;
        return searchElement(tree->right,target);
    }else{
        cout << "Run " << run << " times" << endl;
        return true;
    }
}