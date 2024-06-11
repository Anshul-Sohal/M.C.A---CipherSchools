#include <iostream>
using namespace std;

int factorial(int num){
    if(num == 1){
        return 1;
    }else{
        return (num*factorial(num-1));
    }
}

float ncr(int n,int r){
    int numerator = factorial(n);
    int denomiator = factorial(r) * factorial(n-r);
    return numerator/denomiator;
}

int main() {
    // your code here
    int n,r;
    cout<<"Enter the n in ncr=";
    cin>>n;
    cout<<"Enter the r in ncr=";
    cin>>r;
    float result = ncr(n,r);
    cout<<"The ncr is "<<result;
    return 0;
}