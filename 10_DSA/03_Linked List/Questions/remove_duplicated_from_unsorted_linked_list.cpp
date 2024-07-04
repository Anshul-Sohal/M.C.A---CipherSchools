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

int main() {
    
    return 0;
}