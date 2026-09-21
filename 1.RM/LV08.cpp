#include <iostream>
#include <vector>
using namespace std;

void zad_a() {
    int m, n, v = 0; cin >> m >> n;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        v += a;

        if (v >= m) {
            cout << i;
            break;
        }
    }
}

void zad_b() {
    int a, b; cin >> a >> b;

    for (int i = 0; i < (b - a); ++i) {
        if (i%10 == 0) {
            cout << '\n';
        }
        cout << a + i;
    }
}

void zad_c() {
    int a, p = 0, n = 0; cin >> a;

    for (int i = 0; i < a; ++i) {
        int b; cin >> b;

        if (i % 2 == 0) p += b;
        else n += b;
    }

    if (a % 2 == 0) {
        cout << p / (a / float(2));
        cout << n / (a / float(2));

        if (p / (a / float(2)) > n / (a / float(2))) {
            cout << 'P';
        }
        else {
            cout << 'N';
        }
    }
    else {
        cout << p / (1 + (a / float(2)));
        cout << n / (a / float(2));

        if (p / (1 + (a / float(2))) > n / (a / float(2))) {
            cout << 'P';
        }
        else {
            cout << 'N';
        }
    }
}

void zad_d() {
    for (int i = 0; i < 69; ++i) {
        cout << char(65 + i) << '\n';
    }
}

void zad_e() {
    string n; cin >> n;

    printf("%d.....", n[0]);
    printf(".%d....", n[1]);
    printf("..%d...", n[2]);
    printf("...%d..", n[3]);
    printf("....%d.", n[4]);
    printf(".....%d", n[5]);
}

void zad_f() {
    int n; cout << "Unesi broj: "; cin >> n;
    bool prvi = true;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!prvi) cout << ", ";
            cout << i;
            prvi = false;
        }
    }
}

int main() {
    int zad; cin >> zad;

    switch (zad) {
    case 1:
        zad_a();
        break;
    case 2:
        zad_b();
        break;
    case 3:
        zad_c();
        break;
    case 4:
        zad_d();
        break;
    case 5:
        zad_e();
        break;
    case 6:
        zad_f();
        break;
    }
}
