#include <iostream>

using namespace std;

int brojPaketa(int mase[], int n, int l, int d) {
    int o = 0;

    int i;
    for (i = 0; i < n; i++) {
        if (mase[i] >= l && mase[i] <= d) {
            o++;
        }
    }

    return o;
}

int main() {
    int n, l, d;

    cin >> n >> l >> d;

    int mase[999] = { 0 };

    int i;
    for (i = 0; i < n; i++) {
        cin >> mase[i];
    }
    
    cout << brojPaketa(mase, n, l, d);

    return 0;
}
