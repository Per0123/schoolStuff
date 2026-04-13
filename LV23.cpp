#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <queue>

using namespace std;

void zad_a() {
    for (int i = 0; i < 1000; ++i) {
        int r = rand();
        if (to_string(r).size() == 3) {
            cout << r << '\n';
        }
    }
}

void zad_b() {
    string s = "";
    queue<string> q;

    while (s != "Kraj") {
        cin >> s;

        q.push(s);
    }

    cout << q.size()-1 << ": ";

    while (q.size() != 1) {
        cout << q.front()[0] << ".";
        q.pop();
    }
}

int main() {
    int b; cin >> b;

    switch (b) {
        case 1: zad_a(); break;
        case 2: zad_b(); break;
    }
}
