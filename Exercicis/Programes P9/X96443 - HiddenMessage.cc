// X96443 - Hidden Message
#include<iostream>
#include<vector>
using namespace std;

typedef vector< vector<char> > EncryptedMessage;

struct Coord {
    int x,y;
};

Coord nextD (const Coord& p, int n){
    Coord p1;
    
    if (p.x - 1 < 0 and p.y + 1 > n-1){
        p1.x = n - 1;
        p1.y = p.x + 1;
    }
    else if (p.x == n - 1 and p.y == n - 1){
        p1.x = 0;
        p1.y = 0;
    }
    else if (p.x - 1 < 0){
        p1.y = 0;
        p1.x = p.y + 1;
    }
    else if (p.y + 1 > n-1){
        p1.y = p.x + 1;
        p1.x = n - 1;
    }
    else {
        p1.x = p.x - 1;
        p1.y = p.y + 1;
    }
    return p1;
}

int main(){
    // n = size, d = number of positions to jump to next encrypted letter,  l = number of characters to extract from encrypted message , p = (f,c) coordenates
    int n, d, l;    
    Coord p; 
    while (cin >> n >> d >> l >> p.x >> p.y){
        EncryptedMessage m (n, vector<char> (n));
        // Read the encrypted message
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cin >> m[i][j];
            }
        }
        vector<char> phrase (l);
        // Fill the phrase with encrypted text message
        int i = 0;
        phrase[i] = m[p.x][p.y];
        ++i;
        while (l > 1){
            for (int j = 0; j < d+1; ++j){
                p = nextD(p, n);
            }
            phrase[i] = m[p.x][p.y];
            ++i;
            --l;
        }
        for (int j = 0; j <= phrase.size() - 1; ++j){
            if(phrase[j] == 'X' and phrase[j + 1] == 'X'){
                    cout << ' ';
                    ++j;
            }
            else cout << phrase[j];
        }
        cout << endl;  
    }
}