#include <iostream>
using namespace std;

void zad_a() {
    int n; cin >> n;

    if (n < 20) cout << "hladno je ili prohladno \n";
    else if (n < 25) cout << "ugodno je toplo \n";
    else cout << "toplo je ili jako toplo \n";
}

void zad_b() {
    int po = 0, ne = 0, n, m, k; cin >> n >> m >> k;

    if (n > 0) po++;
    else ne++;
    if (m > 0) po++;
    else ne++;
    if (k > 0) po++;
    else ne++;

    if (po && ne) printf("%d dan je temperatura bila ispod nule, a %d dan je bila pozitivna \n", po, ne);
    else if (po) printf("%d dana je temperatura bila pozitivna \n", po);
    else printf("%d dana je temperatura bila negativna \n", ne);
}

void zad_c() {
    int n, m, k; cin >> n >> m >> k;

    if (pow(n, 2) + pow(m, 2) == pow(k, 2)) cout << "Brojevi zadovoljavaju Pitagorin uvjet";
    else cout << "Brojevi ne zadovoljavaju Pitagorin uvjet";
}

void zad_d() {
    int x, y; cin >> x >> y;

    if (x != 0) {
        if (y != 0) {
            if (x > 0) {
                if (y > 0) cout << "prvi kvadrant";
                else cout << "cetvrti kvadrant";
            }
            else {
                if (y > 0) cout << "drugi kvadrant";
                else cout << "treci kvadrant";
            }
        }
        else cout << "os y";
    }
    else cout << "os x";
}

void zad_e() {
    int a, b; char c; cin >> a >> b >> c;

    if (c == '+') cout << a + b;
    else if (c == '-') cout << a - b;
    else if (c == '*') cout << a * b;
    else cout << a / b;
}

void zad_f() {
    int zd, sg, zg, sd; cin >> zd >> sg >> zg >> sd;

    int zu = zd + zg;
    int su = sg + sd;

    if (zu > su) {
        cout << "Zagreb – razlika u golovima je " << zu - su;
    }
    else if (su > zu) {
        cout << "Split – razlika u golovima je " << su - zu;
    }
    else {
        if (zg > sg) {
            cout << "Zagreb – razlika u golovima je nula";
        }
        else if (sg > zg) {
            cout << "Split – razlika u golovima je nula";
        }
        else {
            cout << "jedanaesterci";
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

    return 0;
}
