#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number = ";
    cin>>a;
    cout<<"Enter the number = ";
    cin>>b;
    if (b == 0){
        cout<<"Denominator Can't be zero for division";
        return 0;
    }else{
        cout<<"Operations on the numbers are = \n";
        cout<<"Addition = "<<a+b<<endl;
        cout<<"Subtraction = "<<a-b<<endl;
        cout<<"Multiplication = "<<a*b<<endl;
        cout<<"Division = "<<a/b<<endl;
        cout<<"Modulo = "<<a%b<<endl;
    }
}