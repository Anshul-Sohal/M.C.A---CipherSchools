#include <iostream>
using namespace std;

class ParentClass{
    public:
    ParentClass(){
        cout<<"Parent Constructor\n";
    }
    ~ParentClass(){}
};

class ChildClass : ParentClass{
    public:
    ChildClass(){
        cout<<"Child Constructor";
    }
    ~ChildClass(){}
};

int main() {
    ChildClass obj;
    return 0;
}