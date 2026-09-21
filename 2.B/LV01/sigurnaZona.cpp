#include <iostream>
using namespace std;

bool uZoni(int xmin, int xmax, int ymin, int ymax, int x, int y) {
    if (x < xmin || x > xmax || y < ymin || y > ymax) {
        return false;
    }
    
    return true;
}

int main() {
    int xmin, xmax, ymin, ymax, x, y;
    cin >> xmin >> xmax >> ymin >> ymax;
    
    int i;
    for (i = 0; i < 3; i++) {
        cin >> x >> y;
        string out = uZoni(xmin, xmax, ymin, ymax, x, y) ? "Unutar\n" : "Izvan\n"; 
        cout << out;
    }
    return 0;
}
