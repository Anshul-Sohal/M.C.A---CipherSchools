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
        // ParentClass::print();
    }
    ~ChildClass(){}
};

int main() {
    ChildClass ChildObj;
    cout<<endl;
    ChildObj.print();
    cout<<endl;
    ParentClass* Baseptr = &ChildObj;
    Baseptr->print();
    cout<<endl;
    ChildClass* Childptr = &ChildObj;
    Childptr->print();
    cout<<endl;
    return 0;
}