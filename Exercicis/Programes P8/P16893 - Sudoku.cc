#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

void read_sudoku(Matrix& sudoku) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> sudoku[i][j];
        }
    }
}

bool check_row(const Matrix& sudoku) {
    bool correct = false;

    int i = 0;
    while (not correct and i < 9) {
        vector<int> numbers(9, 0);
        int j = 0;
        while (not correct and j < 9) {
            if (numbers[sudoku[i][j] - 1] == 0) ++numbers[sudoku[i][j] - 1];
            else correct = true;
            ++j;
        }
        ++i;
    }
    return (not correct);
}

bool check_column(const Matrix& sudoku) {
    bool correct = false;

    int i = 0;
    while (not correct and i < 9) {
        vector<int> numbers(9, 0);
        int j = 0;
        while (not correct and j < 9) {
            if (numbers[sudoku[j][i] - 1] == 0) ++numbers[sudoku[j][i] - 1];
            else correct = true;
            ++j;
        }
        ++i;
    }
    return (not correct);
}

bool check_square(const Matrix& sudoku) {
    bool correct = false;

    for (int i = 0; not correct and i < 3; ++i) {
        for (int j = 0; not correct and j < 3; ++j) {
            vector<int> subQuad(9, 0);
            for (int k = 0; not correct and k < 3; ++k) {
                for (int l = 0; not correct and l < 3; ++l) {
                    int num = sudoku[3 * i + k][3 * j + l];

                    if (subQuad[num - 1] == 1) correct = true;

                    ++subQuad[num - 1];
                }
            }
        }
    }

    return (not correct);
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Matrix sudoku(9, vector<int> (9));

        read_sudoku(sudoku);

        if (check_row(sudoku) and check_column(sudoku) and check_square(sudoku)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}