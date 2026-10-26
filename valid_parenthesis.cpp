
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;

    cout << "Enter parentheses: ";
    cin >> s;

    if (isValid(s))
        cout << "Valid Parentheses" << endl;
    else
        cout << "Invalid Parentheses" << endl;

    return 0;
}
