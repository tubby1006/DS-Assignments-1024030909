#include <bits/stdc++.h>
using namespace std;

int evaluate(vector<string>& arr) {
    stack<int> st;

    for (string token : arr) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b);
        } else {
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<string> expr;
    string token;

    while (iss >> token) {
        expr.push_back(token);
    }

    cout << evaluate(expr) << endl;

    return 0;
}
