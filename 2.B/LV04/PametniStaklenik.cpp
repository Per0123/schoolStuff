#include <iostream>

using namespace std;

int brojIznadPraga(int temp[][6], int redak, int P) {
    int o = 0;

    int i;
    for (i = 0; i < 6; i++) {
        if (temp[redak][i] > P) {
            o++;
        }
    }

    return o;
}

int main() {
    int temp[4][6];
    int r, p;

    cin >> r >> p;

    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            cin >> temp[i][j];
        }
    }

    cout << brojIznadPraga(temp, r, p);
}
