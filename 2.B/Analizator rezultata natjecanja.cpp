#include <iostream>
#include <vector>

using namespace std;

int max_num(const vector<int>& v) {
    int n = v[0];

    int i;
    for (i = 0; i < v.size(); i++) {
        n = max(n, v[i]);
    }

    return n;
}

int find_max(const vector<int>& v, int n) {
    int i;
    for (i = 0; i < v.size(); i++) {
        if (v[i] == n) {
            return i;
        }
    }
}

int find_pass_itr(const vector<int>& v, int n) {
    int o = 0;

    int i;
    for (i = 0; i < v.size(); i++) {
        if (v[i] >= n) {
            o++;
        }
    }

    return o;
}

int find_pass_rec(const vector<int>& v, int p, int i) {
    if (i == v.size()) {
        return 0;
    }

    int d = 0;
    if (v[i] >= p) {
        d = 1;
    }

    return d + find_pass_rec(v, p, i + 1);
}

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> v(n);

    int i;
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "\nNajbolji " << max_num(v);
    cout << "\nPozicija " << find_max(v, max_num(v)) +1;
    cout << "\nProlaz itr" << find_pass_itr(v, p);
    cout << "\nProlaz rec" << find_pass_rec(v, p);
}
