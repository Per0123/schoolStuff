#include <iostream>
using namespace std;

string uZoni(int xmin, int xmax, int ymin, int ymax, int x, int y) {
    if (x < xmin || x > xmax || y < ymin || y > ymax) {
        return "Izvan zone\n";
    }
    else if (x == xmin || x == xmax || y == ymin || y == ymax) {
        return "Na rubu\n";
    }
    
    return "U zoni\n";
}

int main() {
    int xmin, xmax, ymin, ymax, x, y;
    cin >> xmin >> xmax >> ymin >> ymax;
    
    int i;
    for (i = 0; i < 4; i++) {
        cin >> x >> y;
        cout << uZoni(xmin, xmax, ymin, ymax, x, y);
    }
    return 0;
}
