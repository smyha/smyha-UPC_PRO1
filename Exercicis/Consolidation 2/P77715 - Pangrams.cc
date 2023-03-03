// P77715 - Pangrams
#include<iostream>
#include<vector>
using namespace std;
const int ALPHA = 'z' - 'a' + 1;

void fill_alphabet(vector <int>& alpha, char c){
    if (c >= 'a' and c <= 'z'){
        ++alpha[c - 'a'];
    }
    else if (c >= 'A' and c <= 'Z'){
        ++alpha[c - 'A'];
    }
}

bool pangram(const vector <int>& alpha){
    for (int i = 0; i < ALPHA; ++i){
        if (alpha[i] == 0) return false;
    }
    return true;
}

int main(){
    char c;

    while(cin >> c){
        vector<int> alpha(ALPHA, 0);
        while(c != '.'){
            fill_alphabet(alpha, c);
            cin >> c;
        }
        if (pangram(alpha)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}