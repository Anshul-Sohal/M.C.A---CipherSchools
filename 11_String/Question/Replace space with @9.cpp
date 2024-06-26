#include <iostream>
using namespace std;

string replaceSpace(string str){
    for(int i = 0;i<str.length();i++){
        if(str[i] == ' '){
            str.replace(i,1,"@9");
        }
    }
    return str;
}

int main() {
    string str;
    getline(cin,str);
    cout<<replaceSpace(str);
    return 0;
}