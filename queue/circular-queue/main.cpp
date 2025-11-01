#include<iostream>
using namespace std;
#define MAX_SIZE 5

class CircularQueue{
public:
    int arr[MAX_SIZE];
    int rear,front;

    CircularQueue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int val){
        if ((rear+1)% MAX_SIZE == front) {
             printf("Queue Full\n"); 
             return;
         }
        if (front == -1) {
            front = rear = 0;
            arr[rear] = val;
        }
        else {
            rear = (rear + 1) % MAX_SIZE; 
            arr[rear] = val; 
        }
    }


    int dequeue() {
    if (front == -1) { 
        printf("Queue Empty\n"); return -1; 
    }
    int val = arr[front];
    if (front == rear) {
        front = rear = -1;
     } 
    else { 
        front = (front + 1) % MAX_SIZE; 
    }
    return val;
}

void print() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }

    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX_SIZE;  // move circularly
    }
    cout << endl;
}


};



int main(){
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.dequeue();
    cq.enqueue(100);
    // cq.enqueue(60);

    cq.print();

    return 0;
}