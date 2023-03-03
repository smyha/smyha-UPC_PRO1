// P0017 - SIracusaAttack.cc
#include<iostream>
using namespace std;
// Recursive action
void converge(int n, int& k, int& far){
    if (n != 1){
        if (n > far) far = n;
        if (n%2 == 0) converge(n/2, ++k, far);
        else converge(3*n + 1, ++k, far);
    }
}

int main(){
    int m, p;
    cin >> m >> p;
    int greatest = m;
    for (int i = 1; i <= m; ++i){
        int steps = 0;
        converge(i, steps, greatest);
        if (steps >= p) cout << i << endl;
    }
    cout << "The greatest reached number is " << greatest << '.' << endl;   
}   