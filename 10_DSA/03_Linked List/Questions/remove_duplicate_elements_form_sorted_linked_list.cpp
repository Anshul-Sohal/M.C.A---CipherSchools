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
void removeDuplicatedSorted(node<T>*&head){
    if(head == NULL) return;
    node<T>* slow = head;
    node<T>* fast = head->next;
    while(slow!=NULL && fast!=NULL){
        if(slow->data == fast->data){
            node<T>*temp = fast;
            slow->next = fast->next;
            fast = slow->next;
            delete temp;
        }else{
            slow = slow->next;
            fast = fast->next;
        }
    }
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
    insert_data_at_end(head,1);
    insert_data_at_end(head,2);
    insert_data_at_end(head,3);
    insert_data_at_end(head,3);
    removeDuplicatedSorted(head);
    display(head);
    return 0;
}