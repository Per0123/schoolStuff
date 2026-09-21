#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

static void zadA() {
    int ocjene[12] = {
        5, 5, 4,
        2, 3, 2,
        4, 2, 5, 4
    };


    const char* mjeseci[] = {
        "ruj", "list", "stu", "pro", "sij", "velj", "ožu", "tra", "svi", "lip"
    };

    int odlicne = 0;
    double suma = 0;
    int brojOcjena = 0;

    for (int i = 0; i < 10; ++i) {
        cout << mjeseci[i] << ": " << ocjene[i * 3] << ", " << ocjene[i * 3 + 1] << ", " << ocjene[i * 3 + 2] << endl;

        for (int j = 0; j < 3; ++j) {
            if (ocjene[i * 3 + j] == 5) {
                odlicne++;
            }
            suma += ocjene[i * 3 + j];
            brojOcjena++;
        }
    }

    cout << "Broj odliènih ocjena: " << odlicne << endl;

    double prosjek = suma / brojOcjena;
    cout << fixed << setprecision(2) << "Prosjeèna ocjena: " << prosjek << endl;

    if (prosjek >= 4.5) {
        cout << "Ocjena: 5 (odlièan)" << endl;
    }
    else if (prosjek >= 3.5) {
        cout << "Ocjena: 4 (vrlo dobar)" << endl;
    }
    else if (prosjek >= 2.5) {
        cout << "Ocjena: 3 (dobar)" << endl;
    }
    else if (prosjek >= 1.5) {
        cout << "Ocjena: 2 (satisfactoran)" << endl;
    }
    else {
        cout << "Ocjena: 1 (nedovoljan)" << endl;
    }
}

static void zadB() {
    int mat[7], hrv[7], eng[7];

    for (int i = 0; i < 7; ++i) cin >> mat[i];
    for (int i = 0; i < 7; ++i) cin >> hrv[i];
    for (int i = 0; i < 7; ++i) cin >> eng[i];

    int ukupno = 0;
    int min_sati = 1000;
    string min_predmet;

    for (int i = 0; i < 7; ++i) {
        ukupno += mat[i] + hrv[i] + eng[i];
        min_sati = min({ min_sati, mat[i], hrv[i], eng[i] });
    }

    cout << "Ukupno sati: " << ukupno << endl;

    if (min_sati == mat[0]) min_predmet = "Matematika";
    else if (min_sati == hrv[0]) min_predmet = "Hrvatski";
    else min_predmet = "Engleski";

    cout << "Najmanje sati na predmetu: " << min_predmet << endl;

    int min_dan = 0;
    for (int i = 1; i < 7; ++i) {
        if (mat[i] + hrv[i] + eng[i] < mat[min_dan] + hrv[min_dan] + eng[min_dan]) {
            min_dan = i;
        }
    }

    cout << "Najmanje uèenja bilo je u: " << min_dan + 1 << ". danu (ponedjeljak je 1)." << endl;
}

static void zadC() {
    int n;
    cin >> n;
    vector<vector<int>> matrica(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrica[i][j];
        }
    }

    int min_promjene = n * n;

    auto count_changes = [&](int start_value) {
        int promjene = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int expected = (i + j) % 2 == 0 ? start_value : 1 - start_value;
                if (matrica[i][j] != expected) {
                    promjene++;
                }
            }
        }
        return promjene;
        };

    min_promjene = min(count_changes(0), count_changes(1));
    cout << min_promjene << endl;
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

    cout << smax;
}

static void zadF() {
    int N;
    cin >> N;
    vector<vector<int>> matrica(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrica[i][j];
        }
    }

    int count = 0;
    for (int i = 1; i < N - 1; ++i) {
        for (int j = 1; j < N - 1; ++j) {
            if (matrica[i][j] == 1 &&
                matrica[i - 1][j] == 0 && matrica[i + 1][j] == 0 &&
                matrica[i][j - 1] == 0 && matrica[i][j + 1] == 0) {
                ++count;
            }
        }
    }

    cout << count << endl;
}

int main() {
    int n;
    cout << "Odaberite zadatak (1-6): ";
    cin >> n;

    switch (n) {
    case 1: zadA(); break;
    case 2: zadB(); break;
    case 3: zadC(); break;
    case 4: zadD(); break;
    case 5: zadE(); break;
    case 6: zadF(); break;
    default: cout << "Nevažeæi broj zadatka!" << endl;
    }

    return 0;
}
