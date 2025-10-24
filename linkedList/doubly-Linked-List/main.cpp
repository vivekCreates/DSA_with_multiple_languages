#include<iostream>

using namespace std;

class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node(int val){
        prev = NULL;
        data = val;
        next = NULL;
    }
};

class doublyList{
    Node* head;
    Node* tail;

public:
    doublyList(){
        head = tail = NULL;
    }

    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void popFront(){
        if(head == NULL){
            cout << "List is empty, You can't pop";
            return;
        }

        Node* temp = head;
        head = temp->next;
        head->prev = NULL;

    }

    void popBack(){
        if(head == NULL){
           cout << "List is empty, You can't pop";
        }

        Node* temp = head;

        while(temp->next->next){
            temp = temp->next;
        }

        temp->next = NULL;
        tail = temp;
    }

    void print(){
        Node* temp = head;
        while (temp){
            cout << temp->data << " ->" ;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    doublyList dl ;
    dl.pushFront(10);
    dl.pushFront(20);
    dl.pushBack(30);
    dl.popFront();
    dl.popBack();
    dl.print();
    return 0;
}