/* Write a program that computes the number of digits in several bases. */

#include <iostream>
using namespace std;

int main(){
    int base, number, count_binary_digits = 0;

    while (cin >> base >> number){
        while (number != 0){
            number /= base;
            ++count_binary_digits;
        }
        cout << count_binary_digits << endl;
        count_binary_digits = 0;            
    }
}
