#include <iostream>
using namespace std;

int main(){
    int decimal;
    cin >> decimal;
    if (decimal == 0) cout << 0;
    else {
        while (decimal > 0) { // While "decimal"greater than zero 0.
            cout << decimal%2;
            decimal /= 2;
        }   
    }
    cout << endl;
}