#include <iostream>
using namespace std;

template<class T>
class stack{
    public:
    T*arr;
    int top = -1;
    int size;
    stack(T size){
        this->size = size;
        arr = new T[size];
        top = -1;
    }
    void pushCustom(T data){
        if(top == size-1){
            cout<<"Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;        
    }
    void popCustom(){
        if(top == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        // delete arr[top];
        top--;
    }
    T peekCustom(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1) return true;
        return false;
    }
};

int main() {
    stack st(10);
    st.pushCustom(10);
    st.pushCustom(20);
    st.pushCustom(30);
    st.pushCustom(40);
    st.pushCustom(50);
    cout<<st.peekCustom()<<endl;
    st.popCustom();
    st.popCustom();
    st.popCustom();
    st.popCustom();
    st.popCustom();
    cout<<st.peekCustom();
    cout<<((st.isEmpty())?"\nTrue\n":"\nFalse\n");
    return 0;
}