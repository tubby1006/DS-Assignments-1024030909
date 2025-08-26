#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string postfixToInfix(string postfix) {
    stack<string> st;

    for (char c : postfix) {
        if (isspace(c)) continue;

        if (isOperator(c)) {
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string expr = "(" + a + c + b + ")";
            st.push(expr);
        } else {
            st.push(string(1, c));
        }
    }

    return st.top();
}

int main() {
    string postfix;
    getline(cin, postfix);

    string infix = postfixToInfix(postfix);
    cout << infix << endl;

    return 0;
}

