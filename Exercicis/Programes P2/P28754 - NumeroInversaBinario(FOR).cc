#include <iostream>
using namespace std;

int main(){
    int decimal;
    cin >> decimal;
    if (decimal == 0) cout << 0;
    else {
        for (int i = 0; decimal > 0; i++) { 
            cout << decimal%2; // Obteniu el residu de la divisio i torna a dividir el número.
            decimal /=2;
        }  
    }
    cout << endl;
    
}
