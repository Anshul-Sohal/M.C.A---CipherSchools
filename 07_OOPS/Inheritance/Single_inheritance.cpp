#include <iostream>
using namespace std;

class ParentClass{
    public:
    ParentClass(){
        cout<<"Parent Constructor\n";
    }
    void print(){
        cout<<"This is the Parent Class\n";
    }
    ~ParentClass(){}
};

class ChildClass : public ParentClass{
    public:
    ChildClass(){
        cout<<"Child Constructor\n";
    }
    void print(){
        cout<<"This is the Child Class\n";
        ParentClass::print();
    }
    ~ChildClass(){}
};

int main() {
    ChildClass obj;
    cout<<endl;
    obj.print();
    cout<<endl;
    obj.ParentClass::print();
    return 0;
}