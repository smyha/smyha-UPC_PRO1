#include <iostream>
using namespace std;

int main(){
    int decimal,hex;
    cin >> decimal;
    if (decimal == 0) cout << 0;
    else {
        while (decimal > 0) { // mientras que el decimal sea mayor q 0
            hex = decimal%16;
            if (hex >= 10){
                hex = hex + 55;
                cout << char(hex);
            }
            else cout << hex;
            decimal /= 16;
        }   
    }
    cout << endl;
}