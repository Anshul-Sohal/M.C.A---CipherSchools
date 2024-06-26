/*Strings -> string is a collection of characters
It has 2 Types->
1.Strings that are objects of string class(STL)
2.C-String*/
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout<<"Enter your name = ";
    // cin>>str;
    cin.getline(str,100);
    cout<<str<<endl;
    int i = 0;
    while(str[i]!=' '){
        i++;
    }
    cout<<i;
    return 0;
}