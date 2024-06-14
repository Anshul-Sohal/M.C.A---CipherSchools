#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating ....";
    }
    
    private:
    void PrivateMethod(){}
    
    protected:
    void ProtectedMethod(){}
};

class Dog : public Animal{
    public:
    void Speak(){
        cout<<"Bark ...";
    }
    void PrintProtected(){
        ProtectedMethod();
    }
};

int main() {
    Dog dawg;
    dawg.eat();
    dawg.Speak();
    dawg.PrintProtected();
    return 0;
}