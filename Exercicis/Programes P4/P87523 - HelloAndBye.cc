#include <iostream>
using namespace std;

int main (){
    char a, b, c, d;
    char e;
    a = ' '; b = ' '; c = ' '; d = ' '; 
    cin >> e;
    bool found = false;

    while (not found and e != '.'){
        // The word will be found if it fullfills the following conditions
        found = (a == 'h' and b == 'e' and c == 'l' and d == 'l' and e == 'o');
        // Keep the previous letter at the a,b,c,d,e variables
        a = b; b = c; c = d; d = e;
        /* Prove that the program runs correctly cout << a << b << c << d << e << endl;*/ 
        cin >> e;       
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}