#include <iostream>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node* next;
    node(T data){
        this->data = data;
        next = NULL;
    }
};
template<typename T>
void insert_data_at_end(node<T>*&head, T data){
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
void middleOfLinkedList(node<T>*&head){
    node<T>*ptr = head;
    int count = 0;
    while(ptr!=NULL){
        count++;
        ptr = ptr->next;
    }
    int middle = abs(count/2)+1;
    node<T>*temp = head;
    for(int i = 1;i<=middle;i++){
        if(i == middle){
            cout<<temp->data;
            break;
        }    
        temp = temp->next;
    }
}

template<typename T>
void findMiddle(node<T>*head){
    if(head == NULL) return;
    node<T>*slow = head;
    node<T>*fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<endl<<slow->data;
}

int main() {
    node<int>*head = NULL;
    insert_data_at_end(head,56);
    insert_data_at_end(head,23);
    insert_data_at_end(head,7);
    insert_data_at_end(head,90);
    insert_data_at_end(head,523);
    insert_data_at_end(head,32);
    middleOfLinkedList(head);
    findMiddle(head);
    return 0;
}