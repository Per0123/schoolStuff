#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isHydrophobic(char aa) {
    string h = "AVLIMFWYP";
    return h.find(toupper(aa)) != string::npos;
}

bool isNeutral(char aa) {
    string n = "STNQCG";
    return n.find(toupper(aa)) != string::npos;
}

bool isHydrophilic(char aa) {
    string p = "KRHDE";
    return p.find(toupper(aa)) != string::npos;
}

int main() {
    string seq;
    cin >> seq;

    int hydrophobic = 0, neutral = 0, hydrophilic = 0;

    for (char aa : seq) {
        if (isHydrophobic(aa)) hydrophobic++;
        else if (isNeutral(aa)) neutral++;
        else if (isHydrophilic(aa)) hydrophilic++;
    }

    cout << "Sekvenca: " << seq << endl;
    cout << "Duljina: " << seq.length() << endl;
    cout << "Hidrofobne: " << hydrophobic << endl;
    cout << "Neutralne: " << neutral << endl;
    cout << "Hidrofilne: " << hydrophilic << endl;

    return 0;
}
