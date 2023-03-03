// Product of two square Matrix.
#include<iostream>
#include<vector>
using namespace std;
// Define a synonym for the use of Matrix.
typedef vector<int> Rows;
typedef vector<Rows> Matrix;
// REMEMBER: A square matrix have the same number of rows than columns.
Matrix read_matrix (){
    int size;
    cin >> size;

    Matrix mat(size, Rows(size));

    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size;++j){
            cin >> mat[i][j];
        }
    }
    return mat;
}
// Precondition: m is a square matrix n× n with n≥0.
// Postcondition: return the product of two square matrix.
Matrix product(const Matrix& a, const Matrix& b){
    int size = a.size();                                // Same size
    Matrix c (size, Rows(size));

    for (int i = 0; i < size; ++i){                     // Rows
        for (int j = 0; j < size; ++j){                 // Columns
            int amount_element = 0;
            for (int k = 0; k < size; ++k){             // Square 
                amount_element += a[i][k]*b[k][j]; 
            }
            c[i][j] = amount_element;
        }
    }
    return c;
}

int main(){
    // Compose the two matrix factors.
    Matrix a = read_matrix();
    Matrix b = read_matrix();
    // Obtain the Matrix product.
    Matrix c = product(a,b);
}