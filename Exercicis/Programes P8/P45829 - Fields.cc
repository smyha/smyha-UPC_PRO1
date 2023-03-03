// P45829 - Fields
#include<iostream>
#include<vector>
using namespace std;
// Define the synonyms for the use of Matrix
typedef vector< vector<int> > Matrix;
// Operate and print the result data for the main program
void mark_fields (Matrix& mat, int& count_fields, int x, int y){
    int r = mat.size();
    int c = mat[0].size();
    int i = x;
    bool field = false;    
    while (i < r and mat[i][y] != 0){ 
        int j = y;                                      // Outer loop: Columns of the "field".
        while (j < c and mat[i][j] != 0){               // Inner Loop: Rows of the "field"
            mat[i][j] = 0;
            field = true;
            ++j;
        }
        ++i;        
    }
    if (field) ++count_fields;
}

int main(){
    int r, c;;
    while (cin >> r >> c){
        Matrix mat(r, vector<int>(c));
        for (int i = 0; i < r; ++i){
            for(int j = 0; j < c; ++j){
                cin >> mat[i][j];
            }
        }
        int count_fields = 0;
        for (int a = 0; a < r; ++a){
            for (int b = 0; b < c; ++b){
                if (mat[a][b] != 0) mark_fields (mat,count_fields, a, b);
            }
        }
        cout << count_fields << endl;

            
    }
}