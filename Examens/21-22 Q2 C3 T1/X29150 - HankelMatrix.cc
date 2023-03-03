// X29150 - HankelMatrix
#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

Matrix load_data (int size){
    Matrix data (size, Row(size));
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            cin >> data[i][j];
        }
    }
    return data;
}

bool is_hanken (const Matrix& mat){
    int size = mat.size();
    for (int i = 1; i < size; ++i){
        for (int j = 0; j < size - 1; ++j){
            if (mat[i][j] != mat[i-1][j+1]) return false;
        }
    }
    return true;
}

int main(){
    int nmat;
    cin >> nmat;

    for (int i = 0; i < nmat; ++i){
        int size;
        cin >> size;
        Matrix mat = load_data(size);
        if (is_hanken(mat)) cout << "yes" << endl;
        else  cout << "no" << endl;
    }
}