#include <iostream>
using namespace std;

int add(int a , int b){
    return a+b;
}

float add(float a , float b){
    return a+b;
}

int add(int a,int b, int c){
    return a+b+c;
}
int main() {
    int a,b,c;
    cout<<"Enter a numbers = ";
    cin>>a;
    cout<<"Enter a numbers = ";
    cin>>b;
    cout<<"Enter a numbers = ";
    cin>>c;
    cout<<"the numbers added are = "<<add(a,b)<<endl;
    cout<<"The three numbers added are = "<<add(a,b,c);
    return 0;
}