#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

int pow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) result *= base;
    return result;
}

void print(const Matrix& M) {
    int n = M.size();
    int m = M[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cout << M[i][j];
        cout << endl;
    }
}

void pattern(Matrix& M, int n, int i, int j) {
    // BASE CASE
    if (n == 1) {
        M[i][j] = 'O';
        M[i + 1][j] = '|';
        M[i - 1][j] = '|';
        M[i][j + 1] = '-';
        M[i][j - 1] = '-';
    }
    // RECURSIVE CASE
    else {
        --n;
        int move = pow(3, n);
        pattern(M, n, i, j);
        pattern(M, n, i + move, j);
        pattern(M, n, i - move, j);
        pattern(M, n, i, j + move);
        pattern(M, n, i, j - move);
    }
}

void cross(int n) {
    int size = pow(3, n);
    Matrix M(size, Row(size + 2, ' '));
    for (int i = 0; i < size; ++i) {
        M[i][0] = '|';
        M[i][size + 1] = '|';
    }
    pattern(M, n, size/2, size/2 + 1);
    print(M);
}

int main() {
    int n;
    cin >> n;
    cross(n);
}