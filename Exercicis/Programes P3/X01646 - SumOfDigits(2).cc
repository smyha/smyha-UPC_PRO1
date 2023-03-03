 /* Write a program that reads a basis for numeration and several numbers and prints the sum in base 10 of the digits in base b of each one.*/
 
#include <iostream>
 using namespace std;

 int main(){
     int base, number, sum_of_digits = 0;
     cin >> base;

    while (cin >> number){
        cout << number << ": ";
        while (number != 0){
            sum_of_digits += number%base;
            number /= base;
        }
    
    cout << sum_of_digits << endl;
    sum_of_digits = 0;
    
    }
}