#include <iostream>
#include <string>

using namespace std;

bool testDNA(string dna) {
    int count = 0;

    if (dna.length() < 6 || dna.length() > 30) {
        return false;
    }

    int i;
    for (i = 0; i < dna.length(); i++) {
        if (dna[i] == 'G' || dna[i] == 'C') {
            count++;
        }
        else if (dna[i] != 'A' && dna[i] != 'T') {
            return false;
        }
    }

    if (count >= (dna.length() / 2)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s;
    cin >> s;

    string o = testDNA(s) ? "DA" : "NE";
    cout << o;
}
