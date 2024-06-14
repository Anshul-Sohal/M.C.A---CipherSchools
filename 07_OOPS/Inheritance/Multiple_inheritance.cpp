#include <iostream>
using namespace std;

class FirstParentClass{
    public:
    FirstParentClass(){
        cout<<"FirstParent Constructor Called\n";
    }
    void Print(){
        cout<<"This is the First Parent\n";
    }
    ~FirstParentClass(){}
};

class SecondParentClass{
    public:
    SecondParentClass(){
        cout<<"SecondParent Constructor Called\n";
    }
    void Print(){
        cout<<"This is the Second Parent\n";
    }
    ~SecondParentClass(){}
};

class ChildClass : public FirstParentClass, public SecondParentClass{
    public:
    ChildClass(){
        cout<<"Child Constructor Called\n";
    }
    ~ChildClass(){}
};

int main() {
    ChildClass obj;
    obj.FirstParentClass::Print();
    obj.SecondParentClass::Print();
    return 0;
}