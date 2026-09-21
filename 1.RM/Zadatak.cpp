#include <iostream>
using namespace std;

int main() {
    char u = ' ';

    if (u != 'u' and u != 'p') {
        cin >> u;
    }

    for (int i = 0; i < 5; ++i) {
        cout << "\t ";
        cout << i+1;
    }

    cout << "\n";

    for (int i = 1; i <= 13; ++i) {
        if (i > 7) {
            cout << (i % 7);
        }
        else {
            cout << i;
        }
        
        if (u == 'u' and i <= 7) {
            for (int j = 0; j < 5; ++j) {
                cout << "\tmat";
            }
        }
        else if (u == 'p' and i >= 7) {
            for (int j = 0; j < 5; ++j) {
                cout << "\tmat";
            }
        }
        
        cout << "\n";
    }
}
