#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter your marks";
    cin>>marks;
    string result = (marks>=33) ? "pass" : "fail";
    cout<<result;
    return 0;
}