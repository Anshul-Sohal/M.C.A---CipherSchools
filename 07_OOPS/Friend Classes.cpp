#include <iostream>
using namespace std;

class A{
    private:
    int numA;
    friend class B;
    public:
    A(){
        numA = 5;
    }
};

class B{
    private:
    int numB;
    public:
    B(){
        numB = 10;
    }
    int add(){
        A objA;
        return objA.numA + numB;
    }
};

int main() {
    B ObjB;
    cout << ObjB.add();
    return 0;
}