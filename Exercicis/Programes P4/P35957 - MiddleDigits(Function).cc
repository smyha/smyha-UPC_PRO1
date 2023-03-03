#include<iostream>
using namespace std;
// Function to obtain the middle digit of a number;
int middle_digit(int number){
    // Obtain the number of digits of the number,
    int test_number = number;
    int number_digits = 0;
    while (test_number > 0){
        test_number /= 10;
        ++number_digits;
    }
    if (number_digits%2 == 0) return -1;
    // Obtain the half of the number of digits,
    number_digits /= 2;
    // Obtain the middle digit of the number,
    int power = 1; // Exponent of the base 10
    for (int i = 0; i < number_digits; ++i) power *= 10;
    //Return the value of the middle digit,
    return (number/power)%10;
}

int main() {
    int number, position = 0;
    cin >> number;

    int prev, next;
    bool first = true, game_over = false;

    while (not game_over  and position < number) {
	    cin >> next;
	    if (not first and middle_digit(prev) != middle_digit(next)) game_over = true;
        ++ position;
	  
}