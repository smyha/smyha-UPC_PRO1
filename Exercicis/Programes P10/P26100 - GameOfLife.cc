// P26100 - GameOfLife
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matrix;

Matrix load_data (int r, int c){
    Matrix data(r, vector<char>(c));
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            cin >> data[i][j];
        }
    }
    return data;
}

int near_bacterias (const Matrix& mat, int x, int y){
    int n = mat.size();
    int m = mat[0].size();
    
    int addi = x + 1;
    int subi = x - 1;
    int addj = y + 1;
    int subj = y - 1;
    
    bool paddi = addi < n;
    bool psubi = subi >= 0;
    bool paddj = addj < m;
    bool psubj = subj >= 0;
    
    int bact = 0;
    if (paddi and psubj and mat[addi][subj] == 'B') ++bact;
    if (paddi and mat[addi][y] == 'B') ++bact;
    if (paddi and paddj and mat[addi][addj] == 'B') ++bact;
    if (paddj and mat[x][addj] == 'B') ++bact;
    if (psubi and mat[subi][y] == 'B') ++bact;
    if (psubj and mat[x][subj] == 'B') ++bact;
    if (psubi and psubj and mat[subi][subj] == 'B') ++bact;
    if (psubi and paddj and mat[subi][addj] == 'B') ++bact;
    
    return bact;
}

Matrix game_treat(const Matrix&mat, int n, int m){
    Matrix pgame (n, vector<char>(m));
    pgame = mat;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
                int k = near_bacterias(mat, i, j);
                if (mat[i][j] == '.') {
                        if (k == 3) pgame[i][j] = 'B';
                }
                else {
                        if (k != 2 and k != 3) pgame[i][j] = '.';
                }
        }
    }
    return pgame;
}

int main(){
    int n, m;
    cin >> n >> m;
    bool first = true;
    while (n != 0 and m != 0) {
        Matrix game = load_data(n,m);
        game = game_treat(game, n, m);
        
        if (first) first = false;
        else cout << endl;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) cout << game[i][j];
            cout << endl;
        }
        cin >> n >> m;      
    }
}