#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if ((i + j) % 2 == 0) {
				cout << char(219) << char(219);
			}
			else {
				cout << char(176) << char(176);
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if ((i + j) / 4 < 1) {
				cout << char(219) << char(219);
			}
			else if ((i + j) / 4 < 2) {
				cout << char(178) << char(178);
			}
			else if ((i + j) / 4 < 3) {
				cout << char(177) << char(177);
			}
			else {
				cout << char(176) << char(176);
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 10; ++i) {
		for (int j = i; j < 10; ++j) {
			cout << " ";
		}
		for (int j = 1; j <= i; ++j) {
			cout << j;
		}
		for (int j = i-1; j >= 1; --j) {
			cout << j;
		}
		cout << endl;
	}
}
