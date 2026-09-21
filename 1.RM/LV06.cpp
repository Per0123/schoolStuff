#include <iostream>
using namespace std;

void zad_a() {
    int pu, mu, p = 0, m = 0;

    for (int i = 0; i < 8; ++i) {
        cin >> pu >> mu;
        p += pu; m += mu;

        if (p > m) cout << "PAT";
        else cout << "MAT";
    }
}

void zad_b() {
    char s; cin >> s;

    if (s == 'A') cout << "Alfa";
    else if (s == 'B') cout << "Bravo";
    else if (s == 'C') cout << "Charlie";
    else if (s == 'D') cout << "Delta";
    else if (s == 'E') cout << "Echo";
    else if (s == 'F') cout << "Foxtrot";
    else if (s == 'G') cout << "Golf";
    else if (s == 'H') cout << "Hotel";
    else if (s == 'I') cout << "India";
    else if (s == 'J') cout << "Juliett";
    else if (s == 'K') cout << "Kilo";
    else if (s == 'L') cout << "Lima";
    else if (s == 'M') cout << "Mike";
    else if (s == 'N') cout << "November";
    else if (s == 'O') cout << "Oscar";
    else if (s == 'P') cout << "Papa";
    else if (s == 'Q') cout << "Quebec";
    else if (s == 'R') cout << "Romeo";
    else if (s == 'S') cout << "Sierra";
    else if (s == 'T') cout << "Tango";
    else if (s == 'U') cout << "Uniform";
    else if (s == 'V') cout << "Victor";
    else if (s == 'W') cout << "Whiskey";
    else if (s == 'X') cout << "X-ray";
    else if (s == 'Y') cout << "Yankee";
    else if (s == 'Z') cout << "Zulu";
}

void zad_c() {
    int b, n; cin >> b >> n;

    if (b > 10000) cout << b * n;
    else cout << b * 2;
}

void zad_d() {
    int a, b, c, d, p, q; cin >> a >> b >> c >> d >> p >> q;

    if (max(a, b) == a && max(a, c) == a && max(a, d) == a) cout << "A";
    if (max(b, a) == b && max(b, c) == b && max(b, d) == b) cout << "B";
    if (max(c, b) == c && max(a, c) == c && max(c, d) == c) cout << "C";
    if (max(d, b) == d && max(d, c) == d && max(a, d) == d) cout << "D";
}

void zad_e() {
    string n; cin >> n;

    if (int(n[0]) > int(n[2])) cout << "LIJEVI NAGIB";
    else if (int(n[0]) > int(n[2])) cout << "DESNI NAGIB";
    else cout << "RAVNOTEZA";
}

void zad_f() {
    float visina, tezina; cin >> visina >> tezina;
    float bmi = tezina / (visina * visina);

    if (bmi < 20) {
        cout << "Interpretacija: Pothranjeno" << endl;
        cout << "Poruka: Napravi si mlijecni shake." << endl;
    }
    else if (bmi >= 20 && bmi <= 25) {
        cout << "Interpretacija: Normalno" << endl;
        cout << "Poruka: Uzmi casu mlijeka." << endl;
    }
    else if (bmi > 25 && bmi <= 30) {
        cout << "Interpretacija: Prekomjerno" << endl;
        cout << "Poruka: Uzmi casu ledenog caja." << endl;
    }
    else {
        cout << "Interpretacija: Pretio" << endl;
        cout << "Poruka: Posjeti lijecnika." << endl;
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
