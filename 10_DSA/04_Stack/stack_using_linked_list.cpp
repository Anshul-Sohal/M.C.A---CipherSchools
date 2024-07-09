#include <iostream>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node*next;
    node(T data){
        this->data = data;
        next = nullptr;
    }
};

node<int>*head = nullptr;

template<class T>
class stack{
    public:
    void push(T data){
        node<T>*temp = new node<T>(data); 
        if(head == nullptr){
            head = temp;
        }else{
            temp->next = head;
            head = temp;
        }
    }
    void top(){
        cout<< head->data<<endl;
    }
    void pop(){
        if(head == nullptr){
            cout<<"UnderFlow!Stack is empty";
        }else{
            node<T>*temp = head;
            head = head->next;
            delete temp;
        }
    }
    void size(){
        if(head == nullptr) cout<<"0";
        else{
            node<T>*ptr = head;
            int count = 0;
            while(ptr!=nullptr){
                ptr = ptr->next;
                count++;
            }
            cout<<count<<endl;
            delete ptr;
        }
    }
};

int main() {
    stack<int> st;
    st.push(67);
    st.push(34);
    st.push(23);
    st.top();
    st.size();
    st.pop();
    st.top();
    st.size();
    return 0;
}