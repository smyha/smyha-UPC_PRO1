#include<iostream>
using namespace std;
// Precondition: n >= 0, n is a positive integer
// Postcondition: For every given number, print its binary, octal and hexadecimal notation
void ConvertedBase (int n, int base){
    if (n > 0){
        ConvertedBase(n/base, base);
        int reminder = n%base;
        if (reminder > 9){
            if (reminder == 10) cout << 'A';
            else if (reminder == 11) cout << 'B';
            else if (reminder == 12) cout << 'C';
            else if (reminder == 13) cout << 'D';
            else if (reminder == 14) cout << 'E';
            else cout << 'F';
        }
        else cout << reminder;
    }
}

int main(){
    int number, base;
    
    while (cin >> number){
        cout << number << " = ";
        if (number == 0) cout << 0 << ", " << 0 << ", " << 0 << endl;
        else {
            base = 2;
            ConvertedBase(number,base);
            cout << ", ";
            base = 8;
            ConvertedBase(number, base);
            cout << ", ";
            base = 16;
            ConvertedBase(number, base);
            cout  << endl;
        }
    }
}