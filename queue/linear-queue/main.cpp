#include<iostream>
using namespace std;
#define SIZE 5




class Queue{
public:
    int arr[SIZE];
    int front,rear;

    Queue(){
        front=rear=-1;
    }

    void enqueue(int val){
        if(front==SIZE-1){
            cout << "Stack overflow";
            return;
        }else{
            if(front = -1) front = 0;
            arr[++rear] = val;
           
        }
    }

    void dequeue(){
        if(front == -1){
            cout << "Queue is empty! ";
        }else{
            cout << "Popped: " << arr[front] << endl;
            front++;
        }
    }

    void print(){
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " " << endl;
        }
        
    }


};

int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();
    q.dequeue();
    q.print();
    return 0;
}