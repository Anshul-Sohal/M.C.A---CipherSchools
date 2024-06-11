#include <iostream>
using namespace std;

int main() {
    int num, sum=0;
    cout<<"Enter a positive number = ";
    cin>>num;
    for (int i = 0; i <= num; i++){
        sum+=i;
    }
    cout<<"The sum is = "<<sum;
}