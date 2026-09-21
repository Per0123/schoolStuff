#include <iostream>
using namespace std;

string blizi(int x, int a, int b) {
    if ((x-a) < (b-x)) {
        return "A";
    }
    else if ((x-a) > (b-x)) {
        return "B";
    }
    
    return "JEDNAKO";
}

int main() {
    int x, a, b;
    cin >> x >> a >> b;
    
    cout << blizi(x, a, b);
    
    return 0;
}
