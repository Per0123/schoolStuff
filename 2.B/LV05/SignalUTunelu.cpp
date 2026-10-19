#include <iostream>

using namespace std;

int prviSkok(int signal[], int n, int D) {
    int p = signal[0];

    int i;
    for (i = 1; i < n; i++) {
        if (abs(p - signal[i]) > D) {
            return i;
        }

        p = signal[i];
    }

    return -1;
}

int main() {
    int n, d;
    int s[999];

    cin >> n >> d;

    int i;
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << prviSkok(s, n, d);
}
