/*Linked List*/
#include <iostream>
using namespace std;

template <class T>
class node{
    public:
    T data;
    node* next;
    node(T data){
        this->data = data;
        this->next = NULL;
    }
    node(T data,node<T>*&head){
        this->data = data;
        this->next = head;
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
void insert_data_at_beg(node<T>*&head,T data){
    node<T>*temp = new node<T>(data,head);
    head = temp;
}
template<typename T>
void delete_element(node<T>*&head,T position){

}
template<typename T>
bool does_element_exists(node<T>*&head,T key){
    node<T>*ptr = head;
    while(ptr->next!=NULL){
        if(ptr->data==key) return true;
        ptr = ptr->next;
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
    insert_data_at_beg(head,0);
    display(head);
    does_element_exists(head,1)?cout<<"True\n":cout<<"False\n";
    return 0;
}