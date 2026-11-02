#include <iostream>

using namespace std;

bool firstCase(int n1, int n2, int n3, int n4) {
    if ((n1 + n4) == (n2 + n3)) { return true; }
    return false;
}

bool secondCase(int n1, int n2, int n3, int n4) {
    if ((n1 == n2) || (n1 == n3) || (n1 == n4)) { return false; }
    if ((n2 == n3) || (n2 == n4)) { return false; }
    if (n3 == n4) { return false; }
    return true;
}

bool thirdCase(int n1, int n2, int n3, int n4) {
    if (((n4 * 1000) + (n2 * 100) + (n3 * 10) + (n1)) % 7 == 0) {
        return true;
    }
    return false;
}

void getNums(int n, int& n1, int& n2, int& n3, int& n4) {
    n1 = n / 1000;
    n2 = (n / 100) % 10;
    n3 = (n / 10) % 10;
    n4 = n % 10;
}

void out(bool bo) {
    cout << (bo ? "Siguran" : "Nije siguran");
}

int main() {
    int n;
    cin >> n;

    int n1, n2, n3, n4;
    getNums(n, n1, n2, n3, n4);

    if (!firstCase(n1, n2, n3, n4)) {
        out(false);
        return 0;
    }
    if (!secondCase(n1, n2, n3, n4)) {
        out(false);
        return 0;
    }
    if (!thirdCase(n1, n2, n3, n4)) {
        out(false);
        return 0;
    }
    
    out(true);
    return 0;
}
