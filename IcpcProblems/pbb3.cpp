#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for (char i : s) {
        if (i == '(' || i == '{' || i == '[') {
            st.push(i);
        } else {
            if (st.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            char top = st.top();
            st.pop();
            if ((i == ')' && top != '(') || (i == ']' && top != '[') || (i == '}' && top != '{')) {
                cout << "NO" << endl;
                return 0;
            }


        }
    }
    if (st.empty()) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
