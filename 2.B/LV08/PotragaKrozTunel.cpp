#include <iostream>
#include <vector>

using namespace std;

int func(const vector<int>& list, int i) {
    if (i == list.size()) { return 0; }
    int t = (list[i] > 0) ? 1 : 0;
    return t + func(list, i + 1);
}

int main() {
    int n; 
    cin >> n;
    vector<int> l(n);

    int i;
    for (i = 0; i < n; i++) {
        cin >> l[i];
    }

    cout << func(l, 0);
}
