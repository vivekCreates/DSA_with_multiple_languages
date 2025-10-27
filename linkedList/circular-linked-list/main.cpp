#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};


class CircularList{
    Node* head;
    Node* tail;
public:
    CircularList(){
        head = tail = NULL;
    }

    void pushFront(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode; 
            tail->next = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void popFront(){
        if(head == NULL){
            cout << "List is empty, You can't remove";
            return;
        }else{
            Node* temp = head;
            head = temp->next;
            tail->next = head;
        }
    }

    void popBack(){
         if(head == NULL){
            cout << "List is empty, You can't remove";
            return;
        }else{
            Node* temp = head;
            while (temp->next->next != head){
                temp = temp->next;
            }
            temp->next = head;
            tail = temp;
        }
    }

    void print(){
         if(head == NULL){
            cout << "List is empty";
            return;
        }else{
            Node* temp = head;
            while (temp->next != head){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << temp->data << " ";
        }
    }
};

int main(){
    CircularList cl;
    cl.pushFront(10);
    cl.pushFront(20);
    cl.pushBack(30);
    cl.pushBack(40);
    cl.popFront();
    cl.popBack();
    cl.print();
    return 0;
}
