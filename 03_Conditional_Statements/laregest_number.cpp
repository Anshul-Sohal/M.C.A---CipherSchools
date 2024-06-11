#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first Number = ";
    cin>>a;
    cout<<"Enter the second Number = ";
    cin>>b;
    cout<<"Enter the third Number = ";
    cin>>c;
    if(a<b && c<b){
        cout<<b<<" is the largest number out of three";
    }else if(a>b && a>c){
        cout<<a<<" is the largest number out of three";
    }else if(c>a && c>b){
        cout<<c<<" is the largest number out of three";
    }else{
        cout<<"All the numbers are the same";
    }
}