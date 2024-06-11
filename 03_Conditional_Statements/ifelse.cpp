#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age=";
    cin>>age;
    if(age<0){
        cout<<"You are not born";
    }else if(age<=18){
        cout<<"You are a child";
    }else if(age>18 && age<=60){
        cout<<"You are a adult";
    }else{
        cout<<"You are old";
    }
}