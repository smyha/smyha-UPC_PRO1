#include<iostream>
using namespace std;
// Function to return the amount of digits NO RECURSIVE
int suma_digits(int x){
    int amount_digits = 0;
    int digits;
    while (x > 0){
        digits = x%10; // Obtain each digit of the number
        amount_digits += digits; // Sum all the digits
        x /= 10; //Divide again the number until not reach 0.
    }
    return amount_digits;
}
// Function to reduce the amount of digits RECURSIVE
// Precondition: n > 0 | n is a Natural Number
// Postcondition: Return the modified amount of digits
int reduccio_digits(int x){
    // While the amount of digits is greater than 9 (one digit)
    while (suma_digits(x) > 9){
        x = suma_digits(x);
    }
    return suma_digits(x);

}
int main(){
    int number;
    while (cin >> number) cout << reduccio_digits(number) << endl;
}