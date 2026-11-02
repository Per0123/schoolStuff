#include <iostream>

using namespace std;

int ukupno(int a, int b, int c) {
    return (a + b + c);
}

bool prolazi(int a, int b, int c) {
    if (a < 40) { return false; }
    if (b < 40) { return false; }
    if (c < 40) { return false; }

    if (ukupno(a, b, c) < 180) {
        return false;
    }

    return true;
}

void ispisiRezultat(int n, bool bo) {
    cout << n << ' ' << (bo ? "Finale" : "Ne");
}

int main() {
    int a, b, c; 
    cin >> a >> b >> c;

    ispisiRezultat(ukupno(a, b, c), prolazi(a, b, c));

    return 0;
}
