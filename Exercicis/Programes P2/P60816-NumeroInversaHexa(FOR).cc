#include <iostream>
using namespace std;

int main(){
    int decimal, hex;
    cin >> decimal;
    if (decimal == 0) cout << 0;
    else {
        for (int i = 0; decimal > 0 ;i++){
        hex= decimal%16;
            
            if (hex >= 10){
                hex= hex + 55;
                cout << char(hex);
        } 
            else cout << hex;
            decimal /= 16;
        }  
    }
    cout << endl;
}