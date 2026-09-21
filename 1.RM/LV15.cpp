#include <iostream>
using namespace std;

static void zadA() {
    char g[30] = { 0 }, f[30] = { 0 };
    cin >> g >> f;

    for (int i = 0; g[i] != '\0'; ++i) {
        if (g[i] > f[i]) {
            cout << "1.F ";
        }
        else if (g[i] < f[i]) {
            cout << "1.G ";
        }
        else {
            cout << "ISTO ";
        }
    }
}

static void zadB() {
    int n, k; cin >> n >> k;
    int list[101] = { 0 };
    int veci = 0;

    int i = 0;
    for (; i < n; ++i) {
        cin >> list[i];
    }
    list[i+1] = '\0';

    for (int i = 0; i < n; ++i) {
        if (list[i]>list[k]) {
            veci++;
        }
    }

    cout << veci;
}

static void zadC() {
    int n; cin >> n;

    int po[100], br[101] = { 0 };

    for (int i = 0; i < n; i++) {
        cin >> po[i];
        br[po[i]]++;
    }

    int minjed = 101;

    for (int i = 0; i < n; i++) {
        if (br[po[i]] == 1 && po[i] < minjed) {
            minjed = po[i];
        }
    }

    if (minjed == 101) {
        cout << 0 << endl;
    }
    else {
        cout << minjed << endl;
    }
}

static void zadD() {
    int l, n; cin >> l >> n;

    int listMisao[1000] = { 0 }, listOreh[1000] = { 0 };

    for (int i = 0; i < n; ++i) {
        int pi, ki; cin >> pi >> ki;

        listMisao[i] = ki - pi;

        for (int j = 0; j < (ki - pi); ++j) {
            if (listOreh[pi + j] == 0) {
                listOreh[pi + j] = i + 1;
            }
        }
    }

    int o1 = 0;
    for (int i = 0; i < n; ++i) {
        if (listMisao[i] != 0) {
            o1++;
        }
    }

    int o2 = 0;
    for (int i = 0; i < l; ++i) {
        if (listOreh[i] != 0) {
            o2++;
        }
    }

    cout << o1 << '\n' << o2;
}

static void zadE() {
    int n; cin >> n;
    int smax = 0, mmax = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (a > mmax) {
            smax = mmax;
            mmax = a;
        }
        else if (a > smax) {
            smax = a;
        }
    }

    cout  << smax;
}

int main() {
    int n; cin >> n;

    switch (n) {
    case 1:
        zadA();
        break;
    case 2:
        zadB();
        break;
    case 3:
        zadC();
        break;
    case 4:
        zadD();
        break;
    case 5:
        zadE();
        break;
    }
}
