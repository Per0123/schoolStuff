#include <iostream>

using namespace std;

void zad_a() {
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            cout << setw(3) << (i + 1) * (j + 1) << " ";
        }
        cout << endl;
    }
}

void zad_b() {
    int size; cin >> size;

    for (int i = 1; i <= size; i += 2) {
        int razmak = (size - i) / 2;
        cout << string(razmak, ' ') << string(razmak, ' ');
        cout << string(i, char(219)) << string(i, char(219)) << endl;
    }

    for (int i = size - 2; i >= 1; i -= 2) {
        int razmak = (size - i) / 2;
        cout << string(razmak, ' ') << string(razmak, ' ');
        cout << string(i, char(219))  << string(i, char(219)) << endl;
    }
}

void zad_c() {
    int x; cin >> x;

    for (int a = 2; a <= x; a++) {
        for (int b = a + 1; b <= x; b++) {
            for (int c = b + 1; c <= x; c++) {
                if (a * a + b * b == c * c) {
                    cout << a << b << c << endl;
                }
            }
        }
    }
}

void zad_d() {
    int velicina; char smjer, smjestaj;

    cin >> velicina >> smjer >> smjestaj;

    if (smjer == 'G') {
        if (smjestaj == 'L') {
            for (int i = 0; i < velicina; i++) {
                for (int j = 0; j < velicina; j++) {
                    if (i + j >= velicina - 1) {
                        cout << char(219) << char(219);
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (smjestaj == 'D') {
            for (int i = 0; i < velicina; i++) {
                for (int j = 0; j < velicina - i - 1; j++) {
                    cout << "  ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << char(219) << char(219);
                }
                cout << endl;
            }
        }
    }
    else if (smjer == 'D') {
        if (smjestaj == 'L') {
            for (int i = 0; i < velicina; i++) {
                for (int j = 0; j < velicina; j++) {
                    if (i + j >= velicina - 1) {
                        cout << char(219) << char(219);
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (smjestaj == 'D') {
            for (int i = 0; i < velicina; i++) {
                for (int j = 0; j < velicina - i - 1; j++) {
                    cout << "  ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << char(219) << char(219);
                }
                cout << endl;
            }
        }
    }
}

int main() {
    int n; cin >> n;

    switch (n) {
    case(1):
        zad_a();
        break;
    case(2):
        zad_b();
        break;
    case(3):
        zad_c();
        break;
    case(4):
        zad_d();
        break;
    }
}
