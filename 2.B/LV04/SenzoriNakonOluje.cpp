#include <iostream>

using namespace std;

void ispraviMjerenja(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
}

int main() {
    int n;
    int a[999];

    cin >> n;

    int i;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    ispraviMjerenja(a, n);

    for (i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
}
