#include <iostream>
using namespace std;
template<class T>
class node{
    T data;
    node*next;
    node(T data){
        this->data = data;
        next = null;
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
bool doesLoopExists(node<T>*&head){
    if(head == NULL) return true;
    node<T>* slow = head;
    node<T>* fats = head;
    while(slow!=NULL && fast!=NULL){
        slow = slow->next;
        if(fase->next!=NULL) fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

template<typename T>
void display(node<T>*head){
    node<T>*ptr = head;
    while (ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main() {
    node<int>* head = NULL;
    insert_data_at_end(head,1);
    insert_data_at_end(head,2);
    insert_data_at_end(head,3);
    insert_data_at_end(head,4);
    insert_data_at_end(head,5);
    display(head);
    return 0;
}