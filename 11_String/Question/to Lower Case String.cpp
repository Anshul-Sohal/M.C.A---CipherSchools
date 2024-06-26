#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z') return ch;
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
}

int main() {
    string str;
    getline(cin,str);
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toLowerCase(str[i]);
    }
    cout<<str;
    return 0;
}