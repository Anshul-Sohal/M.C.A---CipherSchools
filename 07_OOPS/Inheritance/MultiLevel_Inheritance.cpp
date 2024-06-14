#include <iostream>
using namespace std;

class ParentClass{
    public:
    ParentClass(){
        cout<<"Parent Constructor Called\n";
    }
};

class ChildClass : ParentClass{
    public:
    ChildClass(){
        cout<<"Child Constructor Called\n";
    }
};

class ChildsChildClass : ChildClass{
    public:
    ChildsChildClass(){
        cout<<"ChildsChild Constructor Called\n";
    }
};

int main() {
    ChildsChildClass obj;
    return 0;
}