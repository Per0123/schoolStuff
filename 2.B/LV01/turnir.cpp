#include <iostream>
using namespace std;

bool rezultati(int a, int b, int c) {
    if ((a+b+c) < 200) {
        return false;
    }
    if (a < 40 || b < 40 || c < 40) {
        return false;
    }
    
    return true;
}

int main() {
    int a, b, c; cin >> a >> b >> c;
    
    string out = rezultati(a, b, c) ? "PROLAZI" : "NE PROLAZI"; 
    cout << out;
    
    return 0;
}
