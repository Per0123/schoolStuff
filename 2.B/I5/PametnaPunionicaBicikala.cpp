#include <iostream>

using namespace std;

void out2(int n) {
    if (n >= 4) {
        cout << (n * 1.2);
    }
    else {
        cout << (n * 1.5);
    }
}

void out1(int np, int nb) {
    if (np > nb) {
        cout << nb << ' ' << 0 << ' ';
        out2(nb);
    }
    else {
        cout << np << ' ' << (nb - np) << ' ';
        out2(np);
    }
}

int main() {
    int np, nb;
    cin >> nb >> np;

    out1(np, nb);

    return 0;
}
