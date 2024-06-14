#include <iostream>
using namespace std;

class ParentClass{
    public:
    ParentClass(){
        cout<<"Parent Constructor Called\n";
    }
    ~ParentClass(){}
};

class ChildClass : ParentClass{
    public:
    ChildClass(){
        cout<<"Child Constructor Called\n";
    }
    ~ChildClass(){}
};

class ChildsChildClass : ChildClass{
    public:
    ChildsChildClass(){
        cout<<"ChildsChild Constructor Called\n";
    }
    ~ChildsChildClass(){}
};

int main() {
    ChildsChildClass obj;
    return 0;
}