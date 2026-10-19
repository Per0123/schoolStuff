#include <iostream>

using namespace std;

bool sigurniKod(int z1, int z2, int z3) {
    if ((z1 == z2) || (z2 == z3) || (z3 == z1)) {
        return false;
    }
    if ((z2 < z1) || (z2 < z3)) {
        return false;
    }

    return true;
}

int main() {
    int i1, i2, i3;
    cin >> i1 >> i2 >> i3;

    string o = sigurniKod(i1, i2, i3) ? "DA" : "NE";
    cout << o;
}
