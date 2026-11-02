#include <iostream>
#include <iomanip>

using namespace std;

void naslov() {
    cout << "Sljedeca sekunda" << '\n';
}

void out(int a, int b, int c) {
    cout << setfill('0') << setw(2) << a << ':' << setw(2) << b << ':' << setw(2) << c;
}

void addTime(int &a, int &b, int &c) {
    c++;
    if (c == 60) { c = 0; b++; }
    if (b == 60) { b = 0; a++; }
    if (a == 24) { a = 0; }
}

int main() {
    int a, b, c; 
    cin >> a >> b >> c;

    naslov();
    addTime(a, b, c);
    out(a, b, c);

    return 0;
}
