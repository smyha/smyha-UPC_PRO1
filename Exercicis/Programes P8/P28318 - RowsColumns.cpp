#include<iostream>
#include<vector>
using namespace std;
// Define the matrix, with synonym (supose a regular matrix)
typedef vector<int> Row;
typedef vector<Row> Matrix;
// Print a row
void PrintRow (const Matrix& mat, int RowNum){
    // Number of elements of the internal vector (n.columns)
    int RowSize = mat[0].size();
    cout << "row " << RowNum << ':';
    
    for (int i = 0; i < RowSize; ++i){
        cout << ' ' << mat[RowNum-1][i];
    }
}
// Print a column
void PrintColumn(const Matrix& mat, int ColumnNum){
    // Number of elements of the external vector (n.rows)
    int ColumnSize = mat.size();
    cout << "column " << ColumnNum << ':';
    
    for (int j = 0; j < ColumnSize; ++j){
        cout << ' ' << mat[j][ColumnNum-1];
    }
}
// Print a specific element of the matrix
void PrintElement(const Matrix& mat, int RowNum, int ColumnNum){
    cout << "element " << RowNum << ' ' << ColumnNum << ": " << mat[RowNum - 1][ColumnNum - 1];
}

int main(){
    int rows, columns;
    cin >> rows >> columns;
    // Create the matrix vector
    Matrix mat(rows, Row(columns));
    // Push the values of the matrixs
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns;++j){
            cin >> mat[i][j];
        }
    }
    // Answer to requests
    int a, b;
    string request;
    while (cin >> request){
        if (request == "row"){
            cin >> a;
            PrintRow(mat,a);
        }
        else if (request == "column"){
            cin >> a;
            PrintColumn(mat,a);
        }
        else {
            cin >> a >> b;
            PrintElement(mat,a,b);
        }
        cout << endl;
    }
}