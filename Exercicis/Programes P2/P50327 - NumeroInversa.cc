# include <iostream>
using namespace std;

int main () {

    int number, remainder;
    cin >> number;
    
    if ( number == 0 ) cout << 0; // Exception when number == 0
    
    while ( number != 0) { // For all natural numbers except zero.

    remainder = number%10; 
    number /= 10; 
    cout << remainder;
    
    }

    cout << endl;
    
}