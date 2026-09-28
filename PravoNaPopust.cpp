#include <iostream>

using namespace std;

bool popust(int bodovi, float racun, bool danas) {
    if (bodovi < 12) {
        return false;
    }
    if (racun < 30.00) {
        return false;
    }
    if (danas == true) {
        return false;
    }

    return true;
}

int main() {
    int n, a;
    float b;
    bool c;
    string o;

    cin >> n;

    int i;
    for (i = 0; i < n; i++) {
        cin >> a >> b >> c;
        
        o = popust(a, b, c) ? "DA" : "NE";

        cout << o << "\n";
    }
}
