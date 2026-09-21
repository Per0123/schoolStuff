#include <iostream>
using namespace std;

void zad_a() {
    int a, b; cin >> a >> b;

    if (b%4 == 0 and a == 2) {
        cout << 29;
    }
    else {
        switch (a) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                cout << 31;
                break;
            case 2:
                cout << 28;
                break;
            case 4: case 6:case 9: case 11:
                cout << 30;
                break;
        }
    }
}

void zad_b() {
    int a, b; char c; cin >> a >> b >> c;

    switch (c) {
        case '+':
            printf("%d%d%d=%d", a, c, b, a + b);
            break;
        case '-':
            printf("%d%d%d=%d", a, c, b, a - b);
            break;
        case '/':
            printf("%d%d%d=%d", a, c, b, a / b);
            break;
        case '*':
            printf("%d%d%d=%d", a, c, b, a * b);
            break;
        case '%':
            printf("%d%d%d=%d", a, c, b, a % b);
            break;
    }
}

void zad_c() {
    int a, b; cin >> a >> b;

    switch (a) {
        case 12:
            if (b > 21) {
                cout << "ZIMA";
            }
            else {
                cout << "JESEN";
            }
            break;
        case 1: case 2:
            cout << "ZIMA";
            break;
        case 3:
            if (b > 20) {
                cout << "PROLJEĆE";
            }
            else {
                cout << "ZIMA";
            }
            break;
        case 4: case 5:
            cout << "PROLJEĆE";
            break;
        case 6:
            if (b > 21) {
                cout << "LJETO";
            }
            else {
                cout << "PROLJEĆE";
            }
            break;
        case 7: case 8:
            cout << "LJETO";
            break;
        case 9:
            if (b > 23) {
                cout << "JESEN";
            }
            else {
                cout << "LJETO";
            }
        case 10: case 11:
            cout << "JESEN";
            break;
    }
}

void zad_d() {
    char znak; cin >> znak;

    switch (znak) {
        case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
            cout << "SAMOGLASNIK" << endl;
            break;

        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            cout << "ZNAMENKA" << endl;
            break;

        case '"': case '#': case '$': case '\'': case '(': case ')': case ',': case '.': case ':': case ';': case '?': case '@': case '[': case '\\': case ']':case '^': case '_': case '{': case '}': case '~':
            cout << "INTERPUNKCIJA" << endl;
            break;

        case '+': case '-': case '*': case '/': case '%': case '=': case '<': case '>': case '!': case '&': case '|':
            cout << "OPERATOR" << endl;
            break;

        default:
            cout << "OSTALI ZNAKOVI" << endl;
            break;
        }
    }

void zad_e() {
    int n; cin >> n;

    switch (n) {
        case 1:
            cout << "PONEDJELJAK - UTORAK - SRIJEDA - CETVRTAK - PETAK - SUBOTA - NEDJELJA";
            break;
        case 2:
            cout << "UTORAK - SRIJEDA - CETVRTAK - PETAK - SUBOTA - NEDJELJA";
            break;
        case 3:
            cout << "SRIJEDA - CETVRTAK  - PETAK - SUBOTA - NEDJELJA";
            break;
        case 4:
            cout << "CETVRTAK - PETAK - SUBOTA - NEDJELJA";
            break;
        case 5:
            cout << "PETAK - SUBOTA - NEDJELJA";
            break;
        case 6:
            cout << "SUBOTA - NEDJELJA";
            break;
        case 7:
            cout << "NEDJELJA";
            break;
    }
}

void zad_f() {
    char a, b; int c, d, e;
    cout << "[Kr]ug [Kv]adrat [P]ravokutnik [T]rokut \n";
    cin >> a;
    cout << "[O]pseg [P]ovrsina \n";
    cin >> b;

    switch (b) {
        case 'O':
            switch (a) {
                case 'Kr':
                    cin >> c;
                    cout << 2 * c * 3.14;
                    break;
                case 'Kv':
                    cin >> c;
                    cout << 4 * c;
                    break;
                case 'P':
                    cin >> c >> d;
                    cout << 2 * c + 2 * d;
                    break;
                case 'T':
                    cin >> c >> d >> e;
                    cout << c + d + e;
                    break;
            }
            break;
        case 'P':
            switch (a) {
                case 'Kr':
                    cin >> c;
                    cout << pow(c, 2) * 3.14;
                    break;
                case 'Kv':
                    cin >> c;
                    cout << pow(c, 2);
                    break;
                case 'P':
                    cin >> c >> d;
                    cout << c * d;
                    break;
                case 'T':
                    cin >> c >> d >> e;
                    cout << (c * d) / 2;
                    break;
            }
            break;
    }
}

int main() {
    int zad; cin >> zad;

    switch (zad) {
        case 1:
            zad_a;
        case 2:
            zad_b;
        case 3:
            zad_c;
        case 4:
            zad_d;
        case 5:
            zad_e;
        case 6:
            zad_f;
    }
}
