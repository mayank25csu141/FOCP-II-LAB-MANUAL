/*A machine learning model multiplies matrices for neural network layers. Implement a solution
to multiply two matrices of order m×n and p×q (if valid).*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, p, q;
    cin >> m >> n >> p >> q;
    // Check validity
    if (n != p) {
        cout << "Matrix multiplication not possible ❌" << endl;
        return 0;
    }
    // Declare matrices
    vector<vector<int>> A(m, vector<int>(n));
    vector<vector<int>> B(p, vector<int>(q));
    vector<vector<int>> C(m, vector<int>(q, 0)); // Result matrix
    // Input Matrix A
    cout << "Enter Matrix A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    // Input Matrix B
    cout << "Enter Matrix B:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }
    // Matrix Multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Output Result
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}