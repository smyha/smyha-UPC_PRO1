//Product of Matrix (for any kind) 
#include<iostream>
#include<vector>
using namespace std;
// Define the synonym for the usage of "Matrix"
typedef vector < vector<int> > Matrix;
// Return the full matrix
Matrix read_data(){
    int rows, columns;
    cin >> rows >> columns;

    Matrix mat (rows, vector<int>(columns));

    for (int i = 0; i < rows; ++i){
        for (int j  = 0; j < columns; ++j){
            cin >> mat[i][j];
        }
    }
    return mat;
}
// Precondition: a is a matrix p× q and b is a matrix q× r, with p,q,r≥1.
Matrix product(const Matrix& a, const Matrix& b){
    int r1 = a.size();                              // Size of the rows of the first matrix
    int c1 = a[0].size();                           // Size of the columns of the first matrix
    int c2 = b[0].size();                           // Size of the columns of the second matrix
    
    Matrix c(r1, vector<int> (c2));

    for (int i = 0; i < r1; ++i){
        for(int j = 0; j < c2; ++j){
            for (int k = 0; k < c1; ++k){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    return c;
    
}
    
int main(){
    // Build the Main Factor Matrix of the product
    Matrix a = read_data();
    Matrix b = read_data();
    // Obtain the result data matrix
    Matrix c = product(a, b);
} 
