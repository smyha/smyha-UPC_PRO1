#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    // Establim el limit i la suma del segon 


    if ((h >= 0 and m >= 0 and s >= 0 and h < 24 and m < 60 and s < 60 )) {
        s++; }
    
    // Si els segons arriben a 60, reiniciem el contador de segons a 0.

        if(s == 60) {
            s %= 60; // s = 0
            m++;}

    // Si els minuts arriben a 60, reiniciem el contador de minuts a 0.

        if(m == 60) {
            m %= 60; // m = 0
            h++; }
    
    // Si les hores arriben a 24, reiniciem el contador de hores a 0.

        if(h == 24) 
            h %= 24; // h = 0

    // Establim aquests "if" per omplir un espai amb 0 en cas que les variables siguin menors que 10.
        
        if(h < 10) {cout << '0';} 
        cout << h << ':';

        if(m < 10) {cout << '0';}
        cout << m << ':';

        if(s < 10) {cout << '0';}
        cout << s << endl;
    
}