#include <iostream>

using namespace std;

int sum(int z1, int z2, int z3) {
	return (z1 + z2 + z3);
}

void output(int points, bool pass) {
	cout << points << (pass ? " Prosao je" : " Nije prosao");
}

void pass(int sum) {
	if (sum > 200) {
		output(sum, true);
	}
	else {
		output(sum, false);
	}
}

int main() {
	int z1, z2, z3;
	cin >> z1 >> z2 >> z3;

	int o = sum(z1, z2, z3);
	pass(o);

	return 0;
}
