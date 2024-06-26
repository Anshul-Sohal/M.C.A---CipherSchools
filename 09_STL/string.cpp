#include <iostream>
using namespace std;

int main() {
    string str = "Hello World, how are you";
    //Used to print the beginning character of the string
    cout<<*str.begin()<<endl;
    //Used to print the ending character of the string
    cout<<*(str.end()-1)<<endl;
    //Used to print the size of the String
    cout<<str.size()<<endl;
    //Used to print the length of the String
    cout<<str.length()<<endl;
    //Used to Insert into a particular location into the string
    cout<<str.insert(12," Testing insert")<<endl;
    cout<<str.capacity()<<endl;
    return 0;
}