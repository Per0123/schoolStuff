#include <iostream>
using namespace std;

int main() {
	int n = 0; float p = 0, c = 0;

	cout << "Unesite broj prijeðenih kilometara: ";
	cin >> n;

	cout << "Unesite potrošnju vozila (litara na 100 km): ";
	cin >> p;

	cout << "Unesite cijenu goriva po litri (u eurima): ";
	cin >> c;

	cout << "Potrošeno goriva: " << ((n / 100.0f) * p) << " litara" << endl;
	cout << "Ukupni trošak goriva za putovanje: " << (((n / 100.0f) * p) * c) << " eura" << endl;
}
