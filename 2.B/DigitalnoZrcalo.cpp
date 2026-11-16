#include <iostream>

using namespace std;

void func(int n) {
    cout << n % 10;
    if (n < 10) { return; }
    func(n / 10);
}

int main() {
    int n;
    cin >> n;

    func(n);
}
