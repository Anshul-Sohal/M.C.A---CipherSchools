#include <iostream>
using namespace std;

class ParentClass{
    public:
    ParentClass(){
        cout<<"Parent Class Constructor\n";
    }
    ~ParentClass(){}
};

class FirstChild : ParentClass{
    public:
    FirstChild(){
        cout<<"First Child Constructor\n";
    }
    ~FirstChild(){}
};

class SecondChild : ParentClass{
    public:
    SecondChild(){
        cout<<"Second Child Constructor\n";
    }
    ~SecondChild(){};
};

class ThirdChild : ParentClass{
    public:
    ThirdChild(){
        cout<<"Third Child Constructor\n";
    }
    ~ThirdChild(){};
};

int main() {
    cout<<"The first Child Object Created:\n";
    FirstChild obj1;
    cout<<"The Second Child Object Created:\n";
    SecondChild obj2;
    cout<<"The Third Child Object Created:\n";
    ThirdChild obj3;
    return 0;
}