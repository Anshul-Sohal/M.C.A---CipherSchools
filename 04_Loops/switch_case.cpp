#include <iostream>
using namespace std;

int main() {
    //switch case
    char op;
    float num1,num2;
    cout<<"Enter two number=";
    cin>>num1>>num2;
    cout<<"Enter the operator = ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    default:
        cout<<"Illegal Character";
        break;
    }
    return 0;
}