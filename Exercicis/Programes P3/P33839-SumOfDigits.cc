/* Write a program that reads several numbers and prints the sum of the digits of each one. */

#include <iostream>
using namespace std;

int main(){

    int number, digits, sum_of_digits = 0;
    
    while (cin >> number){
        cout << "The sum of the digits of " << number << " is ";
        while (number != 0){
            digits = number%10;
            sum_of_digits += digits;
            number /= 10;
        }
        cout << sum_of_digits << "." << endl;
        sum_of_digits = 0;
    }
}
