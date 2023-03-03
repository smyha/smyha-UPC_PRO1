// P87801 - WordSearchWithPoints
#include<iostream>
#include<vector>
using namespace std;

typedef vector< vector<char> > MatrixChar;
typedef vector< vector<int> > MatrixInt;
// Get the max value of the word combinations
void get_max_value (const MatrixChar& letters, const MatrixInt& values, int& max_value, string word, int a, int b, int x, int y, int r, int c){
    int k = 0;
    int amount_values = 0;
    int length = word.length();
    bool match = false;
    while (not match and k < length and a < r and b < c){
        if (letters[a][b] == word[k]) amount_values += values[a][b];
        a += x;
        b += y;
        ++k;
        if (k == length) match = true;
    }
    if (match and amount_values >= max_value) max_value = amount_values;
}

int main(){
    int r, c;
    while (cin >> r >> c){
        MatrixChar letters (r, vector<char>(c));                                                // Read the matix of letters
        for (int i = 0; i < r; ++i){
            for (int j = 0; j < c; ++j) cin >> letters[i][j];
        }       
        MatrixInt values (r, vector<int>(c));                                                   // Read the matrix of the values of the letters
        for (int i = 0; i < r; ++i){
            for (int j = 0; j < c; ++j) cin >> values[i][j];
        }

        int t;                                                                                  // Number of words to check (nwords)
        cin >> t;

        for (int i = 0; i < t; ++i){
            string word;
            cin >> word;
            int max_value = 0;
            
            for (int j = 0; j < r; ++j){
                for (int k = 0; k < c; ++k){
                    get_max_value(letters, values, max_value, word, j, k, 1, 0, r, c);          // Search in a horizontal direction
                    get_max_value(letters, values, max_value, word, j, k, 0, 1, r, c);          // Search in a vertical direction
                }
            }
            if (max_value == 0) cout << "no" << endl;                                           // Word cannot be found
            else cout << max_value << endl;
        }
    }
}