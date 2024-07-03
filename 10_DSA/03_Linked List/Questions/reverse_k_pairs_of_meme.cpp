#include <iostream>
using namespace std;

template<class T>
class node{
    public:
    T data;
    node* next;
    node(T data){
        this->data = data;
        this->next = NULL;
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
node<T>* reversePairs(node<T>*&head,int k){
    node<T>* prev = NULL;
    node<T>* curr = head;
    node<T>* next = NULL;
    int count = 0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head->next = reversePairs(next,k);
    }
    return prev;
}

int main() {
    node<int>* head = NULL;
    insert_data_at_end(head,1);
    insert_data_at_end(head,2);
    insert_data_at_end(head,3);
    insert_data_at_end(head,4);
    insert_data_at_end(head,5);
    head = reversePairs(head,3);
    node<int>*ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    return 0;
}