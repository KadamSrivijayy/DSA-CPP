#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {

    stack<char> st;

    for (char ch : s) {

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Closing brackets
        else {

            // Stack empty means no opening bracket
            if (st.empty()) {
                return false;
            }

            char top = st.top();

            // Check matching brackets
            if (ch == ')' && top != '(') {
                return false;
            }

            if (ch == '}' && top != '{') {
                return false;
            }

            if (ch == ']' && top != '[') {
                return false;
            }

            // Remove matched opening bracket
            st.pop();
        }
    }

    // Stack should be empty
    return st.empty();
}

int main() {

    string s;

    cout << "Enter brackets: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid Parentheses";
    }
    else {
        cout << "Invalid Parentheses";
    }

    return 0;
}