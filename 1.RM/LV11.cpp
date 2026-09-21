#include <iostream>
using namespace std;

static void zad_a() {
	char s; int sl = 0, br = 0, zr = 0, op = 0;

	do {
		cin >> s;

		if (isalpha(s)) {
			sl++;
		}
		else if (isdigit(s)) {
			br++;
		}
		else if (s == ',') {
			zr++;
		}
		else if (s == '+' || s == '-' || s == '*' || s == '/' || s == '%') {
			op++;
		}
	} while (s != '.' && s != '!' && s != '?');

	cout << sl << endl << br << endl << zr << endl << op << endl;
}

static void zad_b() {
	int u, r1 = 0, r2 = 0, r3 = 0, r4 = 0;

	do {
		cin >> u;

		if (u == 1) {
			r1++;
		}
		else if (u == 2) {
			r2++;
		}
		else if (u == 3) {
			r3++;
		}
		else if (u == 4) {
			r4++;
		}

	} while (u != 5);
	
	cout << r1 << endl << r2 << endl << r3 << endl << r4 << endl;
}

static void zad_c() {
	char c = ' '; int n = 0;

	do {
		cin >> c;

		if (c == 'S') {
			c++;
		}
		else if (c == 'M') {
			c += 2;
		}
		else if (c == 'L') {
			c += 3;
		}
	} while (c != 'E');

	cout << n;
}

static void zad_d() {
	double dw,  pw, tw; 
	int pc,  bc = 0;  

	while (true) {
		cin >> dw;

		if (dw == 0) {
			break; 
		}

		dw *= 1000; 
		tw = 0, pc = 0; 

		while (tw < dw) {
			cin >> pw;
			tw += pw;
			pc++;

			if (tw >= dw) {
				break;
			}
		}

		cout << pc << endl << tw - dw << endl;
		bc++;
	}

	cout << bc << endl;
}

int main() {
    int zad; cin >> zad;

	switch (zad) {
	case 1:
		zad_a();
	    break;
	case 2:
		zad_b();
		break;
	case 3:
		zad_c();
		break;
	case 4:
		zad_d();
		break;
	}
}
