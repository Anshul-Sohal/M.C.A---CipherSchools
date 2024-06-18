#include <iostream>
using namespace std;
//Template for Class
template<class T>
class Number{
    private:
    T num;
    public:
    Number(T num){
        this->num = num;
    }
    T getNumber(){
        return num;
    }
};
//Template for function
template<typename T,typename T2>
auto add(T a, T2 b){
    return a + b;
}

int main() {
    Number<int> obj(23);
    Number<float> obj2(23.56);
    cout<<"The number when template is used for int = "<<obj.getNumber()<<endl;
    cout<<"The number when template is used for float = "<<obj2.getNumber()<<endl;
    cout<<add(45,21.54);
    return 0;
}