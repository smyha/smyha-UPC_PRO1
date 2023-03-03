#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;
// Pre: f > 0, c > 0; there is an integer matrix in the input channel
// Post: returns the integer matrix read from the input channel
Matriz read_matriz(int f, int c) {
    Matriz data (f, vector<int> (c));
    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            cin >> data[i][j];
        }
    }
    return data;
}

int upper_right_submatrix (const Matriz& mat, int x, int y, int columnas){
    int amount = 0;
    for (int i = 0; i <= x; ++i){
        for (int j = y; j < columnas; ++j){
            amount += mat[i][j];
        }
    }
    return amount;
}

int lower_left_submatrix (const Matriz& mat, int x, int y, int filas){
    int amount = 0;
    for (int i = x; i < filas; ++i){
        for (int j = 0; j <= y; ++j){
            amount += mat[i][j];
        }
    }
    return amount;
}

int main(){
    int filas, columnas;
    cin >> filas >> columnas;

    Matriz mat = read_matriz(filas, columnas);

    int x, y;
    while (cin >> x >> y){
        int r = upper_right_submatrix(mat, x, y, columnas);
        int l = lower_left_submatrix(mat, x, y, filas);
        
        if (r == l) cout << "si: " << r << endl;
        else cout << "no: " << r << ", " << l << endl;
    }
}