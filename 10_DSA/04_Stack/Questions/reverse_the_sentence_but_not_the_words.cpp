#include <iostream>
#include <stack>
using namespace std;

void reverseStringWords(string str){
    stack<string> st;
    string word = "";
    for(int i = 0;i<str.length();i++){
        while(str[i]!=' '&&i<str.length()){
            word+=str[i];
            i++;
        }
        st.push(word);
    }
}

int main() {
    
    return 0;
}