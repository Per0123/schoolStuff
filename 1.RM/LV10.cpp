#include <iostream>
#include <string>
using namespace std;

static void zad_a() {
    int n, k; cin >> n >> k;

    if (n>k) {
        cout << k%n;
    }
    else {
        cout << n%k;
    }
}

static void zad_b() {
    string n; cin >> n;
    int x = 0, m = atoi(n.c_str());

    for (int i = 0; i < n.size(); ++i) {
        x += atoi(n.substr(i, 1).c_str());
    }

    if (m % x == 0) {
        cout << x;
    }
    else {
        cout << "ARTHUR";
    }
    
}

static void zad_c() {
    string n, m = ""; cin >> n;

    for (int i = 0; i < n.size(); ++i) {
        m += n[n.size() - i - 1];
    }
    cout << atoi(m.c_str());
}

static void zad_d() {
    // !
}

static void zad_e() {
    int p, k; cin >> p >> k;
    bool bo = true;

    while (p - k > 10) {
        if (bo) {
            p -= 10;
            bo = false;
        }
        else {
            k += 10;
            bo = true;
        }
    }

    if (bo) {
        cout << k;
    }
    else {
        cout << p;
    }
}

static void zad_f() {
    string n; cin >> n;

    while (not n.empty()) {
        cout << n << '\n';

        for (size_t i = 0; i < n.size(); ++i) {
            if (n[i] == '0' || n[i] == '1') {
                n.erase(i, 1);
                --i;
            }
            else {
                n[i] -= 1;
            }
        }
    }

    cout << 0;
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
