#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    return 0;
}