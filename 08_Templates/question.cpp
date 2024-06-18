#include <iostream>
using namespace std;

template<class T>
class Add{
    private:
    T num1;
    T num2;
    public:
    Add(){}
    Add(T num1, T num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    T getSum(){
        return num1+num2;
    }
};

int main() {
    Add<int> obj(45,67);
    Add<float> obj2(3.5,6.2);
    cout<<"The sum of Interger number = "<<obj.getSum()<<endl;
    cout<<"The sum of Float Number = "<<obj2.getSum();
    return 0;
}