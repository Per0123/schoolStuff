#include <iostream>

using namespace std;

int main() {
    int u, p; 
    cin >> u >> p;

    int priceP = 12;
    int priceU = 9;

    float price = float(priceP*p) + (priceU*u);

    if ((p + u) >= 5) {
        price *= .9;
    }
    
    cout << price;
}
