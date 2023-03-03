#include <iostream>
using namespace std;

int main (){

    int n, m ,amount = 0;
    cin >> n;
    m = n;
    
    // Mientras el numero no sea igual a 0, suma los digitos en posicion impar i divide el numero entre 10

    while (n != 0){
        amount += n%10;
        n /= 100;
    }
    
    if (amount%2 == 0) cout << m << " IS COOL" << endl;
    else cout << m << " IS NOT COOL" << endl;
}