#include<iostream>
#include<vector>
#include<string>
using namespace std;

const int Aa = 'A' - 'a';
typedef vector < vector<char> > Matrix;
typedef vector<string> List;                                                                                            // Define a matrix with synonyms

void search2D (const Matrix& soup_word, Matrix& soup_aux, string word, int i, int j, int p, int m, int x, int y){
    int k = 0;
    int length = word.length();
    bool match = false;
    int t = 0;
    while (not match and k < length and i < x and j < y){
        if (soup_word[i][j] == word[k]) ++t;
        i += p;
        j += m;
        ++k;
        if (t == length) match = true;
    }
    if (match){
        for (int l = 0; l < length; ++l){
            i -= p;
            j -= m;
            if (soup_aux[i][j] >= 'a' and soup_aux[i][j] <= 'z') soup_aux[i][j] += Aa;
        }
    }
}

int main(){
    int nwords, n, m;
    bool first = true;
    while (cin >> nwords >> n >> m){
        List words(nwords);
        for (int i = 0; i < nwords; ++i) cin >> words[i];
        
        Matrix soup_word (n,vector<char> (m));                           
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j) cin >> soup_word[i][j];
        }

        Matrix soup_aux = soup_word;
        for (int i =  0; i < nwords; ++i){
            for (int j = 0; j < n; ++j){
                for (int k = 0; k < m; ++k){
                search2D (soup_word, soup_aux, words[i], j, k, 1, 0, n, m);                                             // Search in a horizontal direction
                search2D (soup_word, soup_aux, words[i], j, k, 0, 1, n, m);                                             // Search in a vertical direction
                search2D (soup_word, soup_aux, words[i], j, k, 1, 1, n, m);                                             // Search in a diagonal direction
                }
            }
        }
        if (not first) cout << endl;
        first = false;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                if (j != 0) cout << " ";
                cout << soup_aux[i][j];
            }
            cout << endl;
        }
    }
}  
