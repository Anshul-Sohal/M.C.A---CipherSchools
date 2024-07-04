#include <iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    queue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int data){
        if(rear == size -1){
            cout<<"Queue Overflow";
            return;
        }
        if(front == -1){
            front++;
        }
        rear++;
        arr[rear] = data;
    }
    void dequeue(){
        if(rear == -1 && front == -1){
            cout<<"Queue Underflow";
            return;
        }
        if(rear == front){
            front--;
            rear--;
            return;
        }
        rear--;
    }
    void peekLast(){
        if(front == -1 && rear == -1){
            cout<<"Queue is Empty";
            return;
        }
        cout<<arr[rear]<<endl;
    }
    void peekFront(){
        if(front == -1 && rear == -1){
            cout<<"Queue is Empty";
            return;
        }
        cout<<arr[front]<<endl;
    }
};

int main() {
    queue q(10);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.peekFront();
    q.peekLast();
    q.dequeue();
    q.peekLast();
    return 0;
}