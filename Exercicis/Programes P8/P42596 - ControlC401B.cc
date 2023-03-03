// P42596 - ControlC401B
#include<iostream>
#include<vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void min_max(const Matrix& mat, int& minimum, int& maximum){
    maximum = mat[0][0];
    minimum = maximum;
    
    int f = mat.size();
    int c = mat[0].size();

    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            if (mat[i][j] > maximum) maximum = mat[i][j];
            if (mat[i][j] < minimum) minimum = mat[i][j];  
        }
    }
}

int main(){
    int rows, columns;
    int diference = 0, pos_matrix = 1, matrix_counter = 1;
    
    while (cin >> rows >> columns){
        Matrix mat(rows,vector<int>(columns));
        for (int i = 0; i < rows;++i){
            for (int j = 0; j < columns; ++j){
                cin >> mat[i][j];
            }
        } 

        int max, min;
        min_max (mat, min, max);
        if ((max - min) > diference){
            diference = max - min;
            pos_matrix = matrix_counter;
        }
        ++matrix_counter;
    }
    cout << "la diferencia maxima es " << diference << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << pos_matrix << endl;
}