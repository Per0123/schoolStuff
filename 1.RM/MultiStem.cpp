#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

void cm(const vector<int>& A, const vector<int>& B, int& TP, int& TN, int& FP, int& FN) {
    TP = TN = FP = FN = 0;

    for (size_t i = 0; i < A.size(); ++i) {
        if (A[i] == 1 && B[i] == 1) TP++;
        else if (A[i] == 1 && B[i] == 0) TN++;
        else if (A[i] == 0 && B[i] == 1) FP++;
        else if (A[i] == 0 && B[i] == 0) FN++;
    }
}

double ji(int TP, int FP, int FN) {
    int d = TP/(TP+FP+FN);
    if (d == 0) return 0, 0;
    return static_cast<double>(TP) / d;
}

int main() {
    int n; cin >> n;
}

// 1/2
