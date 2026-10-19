#include <iostream>

using namespace std;

int najboljiKoridor(int teren[][4], int brojRedaka, int D) {
    int p; bool bo;

    int i, j;
    for (i = 0; i < 4; i++) {
        p = teren[i][0];
        bo = true;

        for (j = 1; j < brojRedaka; j++) {
            if (abs(p - teren[i][j]) > D) {
                bo = false;
            }

            p = teren[i][j];
        }

        if (bo) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, d;
    int teren[999][4];

    cin >> n >> d;

    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < n; j++) {
            cin >> teren[i][j];
        }
    }

    cout << najboljiKoridor(teren, n, d);
}
