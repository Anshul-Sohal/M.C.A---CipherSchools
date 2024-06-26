#include <iostream>
using namespace std;

int main() {
    string str= "madam";
    char begin = 0,end=(str.length())-1;
    while(begin<=end){
        if(str[begin]==str[end]){
            begin++;
            end--;
        }else{
            cout<<"Is not a Palindrome";
            return 0;
        }
    }
    cout<<"Is a Palindrome";
    return 0;
}