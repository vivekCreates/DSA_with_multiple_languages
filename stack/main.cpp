#include<iostream>
using namespace std;
#define SIZE 5

class Stack{
public:
    int arr[SIZE];
    int top;
    Stack(){
        top = -1;
    }

    void push(int val){
        if(top == SIZE-1){
            cout << "Stack Overflow";
            return;
        }else{
            arr[++top] = val;  
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack is empty!";
            return;
        }else{
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void print(){
        for (int i = top; i>=0; i--){
           cout << arr[i] << " ";
        }
        cout << endl;
    }
  
    int peek(){
        return arr[top];
    }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    s.pop();
    s.print();
    cout << s.peek();

    return 0;
}