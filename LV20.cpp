#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool iPS(const string& text) {
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

int zad_a() {
    string str1; cin >> str1;

    cout << str1 << " -> " << iPS(str1);

    return 0;
}

bool isto(const string& s) {
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

int zad_b() {
    string iz; cin >> iz;

    cout << isto(iz);

    return 0;
}

int main() {
    int br; cin >> br;

    switch (br) {
    case 1:
        zad_a();
        break;
    case 2:
        zad_b();
        break;
    }

    return 0;
}
