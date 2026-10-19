#include <iostream>
#include <vector>

using namespace std;

int prvaPunionica(const vector<int>& slobodno, int K) {
    int i;
    for (i = 0; i < slobodno.size(); i++) {
        if (slobodno[i] >= K) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> s;
    int n, k;

    cin >> n >> k;

    int i;
    for (i = 0; i < n; i++) {
        int a; cin >> a;
        s.push_back(a);
    }

    cout << prvaPunionica(s, k);
}
