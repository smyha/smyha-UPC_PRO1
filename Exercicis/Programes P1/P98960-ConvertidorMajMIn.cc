#include <iostream>
using namespace std;
int main () {

    char letter;
    cin >> letter;

    if ( letter >= 65 and letter <= 90 ) {
        cout <<  char(letter + 32) << endl;
    }
    else { 
        cout << char(letter - 32) << endl;
    }
}