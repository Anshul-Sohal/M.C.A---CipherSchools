//Pure Virtual Functions
/*If a function doesn't have any use in the base class but the function must be implemented by all its derived class.
A Class that contains a pure virtual function is known as abstract class.*/
#include <iostream>
using namespace std;

class BaseClass{
    public:
    virtual void display() = 0; //Pure Virtual Function
};

class DerviedClassOne : public BaseClass{
    public:
    void display() override{
        cout<<"This is Derived Class One\n";
    }
};

class DerviedClasstwo : public BaseClass{
    public:
    void display() override{
        cout<<"This is Derived Class Two\n";
    }
};

int main() {
    DerviedClasstwo DerviedTwoObj;

    return 0;
}