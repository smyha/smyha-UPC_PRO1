// X17276 - IncreasingDiagonals
#include<iostream>
#include<vector>
using namespace std;
// Define the synonyms for the use of Matrix
typedef vector< vector<int> > Matrix;

bool check_increasing_diagonals (const Matrix& mat,int x0, int y0, int r, int c){
      int pre;
      // TOP-RIGHT
      pre = mat[x0][y0];
      int i = x0-1;
      int j = y0+1;
      while(i >= 0 and j < c){
        if (mat[i--][j++] <= pre) return false;
        else pre = mat[i+1][j-1];
      }
      // TOP-LEFT
      pre = mat[x0][y0];
      i = x0-1;
      j = y0-1;
      while(i >= 0 and j >= 0){
        if(mat[i--][j--] <= pre) return false;
        else pre = mat[i+1][j+1];
      }
      // BOTTOM-RIGHT
      pre = mat[x0][y0];
      i = x0+1;
      j = y0+1;
      while(i < r and j < c ){
        if(mat[i++][j++] <= pre) return false;
        else pre = mat[i-1][j-1];
      }
      // BOTTOM-LEFT
      pre = mat[x0][y0];
      i = x0+1;
      j = y0-1;
      while(i < r and j >= 0){
        if(mat[i++][j--] <= pre) return false;
        else pre = mat[i-1][j+1];
      }
      return true;
}


int main(){
  int r, c;
  while (cin >> r >> c){
    Matrix mat(r, vector<int>(c));
    for (int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        cin >> mat[i][j];
      }
    }
    int x0, y0;
    cin >> x0 >> y0;
    if (check_increasing_diagonals(mat, x0, y0, r, c)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}