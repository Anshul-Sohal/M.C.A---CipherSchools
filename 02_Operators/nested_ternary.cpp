#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    string number = (a==0)?"Number is Zero":((a>0)?"Number is Positive":"Number is Negative");
    cout<<number;
    return 0;
}