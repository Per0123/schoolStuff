#include <iostream>

using namespace std;

bool valjanoMjerenje(float temp, char c, bool bo) {
    if (!bo) {
        return false;
    }

    if (c == 'C') {
        if (temp < -40.0 || temp > 85.0) {
            return false;
        }

        return true;
    }
    else if (c == 'F') {
        if (temp < -40.0 || temp > 185.0) {
            return false;
        }

        return true;
    }
    else {
        return false;
    }
}

int main() {
    float temp; char c; bool bo;
    cin >> temp >> c >> bo;

    string o = valjanoMjerenje(temp, c, bo) ? "KORISTI" : "ODBACI";
    cout << o;
}
