#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void swap(int& row, int& columns){
    int aux = row;
    row = columns;
    columns = aux;
}

void transpose (Matrix& mat){
    // Obtain the number of rows
    int size = mat.size();
    for (int i = 0; i < size - 1; ++i){
        for (int j = i + 1; j < size; ++j){
            swap (mat[i][j],mat[j][i]);
        }
    }
}

int main(){
    int row, columns;
    cin >> row >> columns;
    
    // Create the Main Matrix
    Matrix mat(row, Row(columns));
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < columns;++j){
            cin >> mat[i][j];
        }
    }
    // Call the transpose matrix
    transpose(mat);
    // Return the transpose matrix.
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < columns;++j){
            cout << mat[i][j];
        }
    }
}