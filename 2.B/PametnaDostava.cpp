#include <iostream>

using namespace std;

bool check(int mass, int lenght) {
    if (mass > 20) {
        return false;
    }
    if (lenght > 30) {
        return false;
    }
    return true;
}

float price(int lenght) {
    return ((float)3 + (.4 * lenght));
}

bool discount(int price) {
    if (price >= 80) {
        return true;
    }
    return false;
}

void output(bool bo, int price) {
    if (!bo) {
        cout << "Dostava nije moguca";
    }
    else {
        cout << "Dostava je moguca\nOna iznosi: " << price;
    }
}

int main() {
    int n, l, m, uk = 0;
    cin >> n >> l >> m;

    uk = price(l);
    if (discount(n)) {
        uk -= 3;
    }

    output(check(m, l), uk);
    return 0;
}
