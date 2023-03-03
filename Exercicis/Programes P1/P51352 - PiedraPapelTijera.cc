# include <iostream>
using namespace std;

int main (){

    char a, b;
    cin >> a >> b;
    
    // Guanya el primer

    if ((a == 'A' and b == 'P') or (a == 'P' and b == 'V') or ( a == 'V' and b == 'A')) {
        cout << 1 << endl; 
    }
    
    // Empat

    else if ( a == b) cout << "-" << endl;

    // Guanya el segon

    else cout << 2 << endl;

}