/* Write a code that converts temperatures in celsius degrees to fahrenheit degrees and vice
versa. We recall that t Celsius degrees are 1.8t +32 Fahrenheit degrees. */

#include <iostream>
using namespace std;

int main(){
    int n_temperature;
    cin >> n_temperature;

    for (int i = 0; i < n_temperature; ++i){
        char unit;
        double temperature;
        cin >> unit >> temperature;
        
        cout.setf(ios::fixed);
        cout.precision(1);

        // Convert Celsius degrees to Fahrenheit degrees. (F = 1,8t + 32 ).
        if (unit == 'F'){
             cout << "C " << (temperature - 32)/1.8 << endl;
        }
        // Convert Fahrenheit degrees to Celsius degrees. (C)
        else {  // F = Fahrenheit // temperature in Fahrenheit
            cout << "F " << temperature*1.8 + 32 << endl; 
        }
    }
}