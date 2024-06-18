/*Runtime Polymorphism / Late Binding
Virtual function is a member function in the base class that you redefine in the derieved class.*/
/*A virtual function must be defined in the base class even though it is not used.
Virtual Functions must be members of some class.
They are accessed through objcet pointers.
*/
#include <iostream>
using namespace std;

class BaseClass{
    public:
    virtual void display(){
        cout<<"This is Base class\n";
    }
    ~BaseClass(){}
};

class DerivedClass : public BaseClass{
    public:
    void display() override{
        cout<<"This is Derived Class\n";
    }
    ~DerivedClass(){}
};

int main() {
    DerivedClass baseObj;
    BaseClass* BasePtr = &baseObj;
    BasePtr->display();
    return 0;
}