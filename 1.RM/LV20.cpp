#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool zad_a(const string& text) {
    string filtered = "";
    for (char c : text) {
        if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')) filtered += tolower(c);
    }

    stack<char> s;
    for (char c : filtered) s.push(c);

    for (char c : filtered) {
        if (c != s.top()) return false;
        s.pop();
    }
    return true;
}

bool zad_b(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }

        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    int br; cin >> br;
    string str; cin >> str;

    switch (br) {
    case 1:
        zad_a(str);
        break;
    case 2:
        zad_b(str);
        break;
    }

    return 0;
}
