#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool isDigit(char ch){
    return (ch<='9' && ch>='0');
}

int prefixToAnswer(string polishNotation){
    stack<int> operands;
    for(int i = polishNotation.length()-1;i>=0;--i){
        char ch = polishNotation[i];
        if (isDigit(ch)) {
            operands.push(ch - '0');
        }else if(polishNotation[i] == '+' || polishNotation[i] == '-' || polishNotation[i] == '*' || polishNotation[i] == '/' || polishNotation[i] == '^'){
            int operand1 = operands.top();
            operands.pop();
            int operand2 = operands.top();
            operands.pop();
            switch (ch)
            {
            case '+':
                operands.push(operand1 + operand2);break;
            case '-':
                operands.push(operand1 - operand2);break;
            case '*':
                operands.push(operand1 * operand2);break;
            case '/':
                operands.push(operand1 / operand2);break;
            case '^':
                operands.push(pow(operand1,operand2));break;
            default:
                break;
            }
        }
    }
    return operands.top();
}

int main() {
    string polish;
    cin>>polish;
    cout<<prefixToAnswer(polish);
    return 0;
}