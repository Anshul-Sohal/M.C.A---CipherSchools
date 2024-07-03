#include <iostream>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node*next;
    node(T data){
        this->data = data;
        next = NULL;
    }
};
template<typename T>
void insert_at_end(node<T>*&head, T data){
    node<T>*temp = new node<T>(data);
    if(head == NULL){
        head = temp;
    }else{
        node<T>*ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

template<typename T>
bool circularLinkedList(node<T>*&head){
    node<T>*ptr = head;
    while(ptr!=NULL){
        ptr = ptr->next;
        if(ptr == head) return true;
    }
    return false;
}

template<typename T>
void display(node<T>*&head){
    node<T>*ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    node<int>*head = NULL;
    insert_at_end(head,1);
    insert_at_end(head,2);
    insert_at_end(head,3);
    insert_at_end(head,4);
    insert_at_end(head,5);
    display(head);
    cout<<circularLinkedList(head);
    return 0;
}