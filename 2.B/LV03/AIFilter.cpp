#include <iostream>
#include <string>

using namespace std;

bool prihvatljivaPoruka(string poruka) {
	if (poruka == "") {
		return false;
	}
	
	if (poruka.length() > 40) {
		return false;
	}

	if (poruka.find('#') == string::npos) {
		return false;
	}
	if (poruka.find("!!") == string::npos) {
		return false;
	}

	return true;
}

int main() {
	string s;
	getline(cin, s);

	string o = prihvatljivaPoruka(s) ? "PRIHVACENA" : "ODBIJENA";
	cout << o;
}
