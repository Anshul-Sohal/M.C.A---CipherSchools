#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool isDigit(int ch){
    return ch>=0 && ch<=9;
}

int postfixToAnswer(string reversePolish){
    stack<int> st;
    for(int i = 0; i<reversePolish.length();i++){
        char ch = reversePolish[i];
        if(isDigit(ch)){
            st.push(ch - '0');
        }else if(ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '^'){
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch(ch){
                case '+':
                    st.push(op1+op2);break;
                case '-':
                    st.push(op1-op2);break;
                case '/':
                    st.push(op1/op2);break;
                case '*':
                    st.push(op1*op2);break;
                case '^':
                    st.push(pow(op1,op2));break;
                default:
                    break;
            }
        }
    }
    return st.top();
}

int main() {
    string expression;
    cout<<"Enter the Postfix Expression that you want to find the answer to = ";
    cin>>expression;
    cout<<endl<<postfixToAnswer(expression);
    return 0;
}