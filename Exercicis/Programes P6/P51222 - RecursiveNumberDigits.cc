#include<iostream>
using namespace std;

// Precondition: n >= 0
// Postcondition: Return the number of digits of the number
int number_of_digits(int n){
    if (n < 10) return 1;
    return number_of_digits (n/10) + 1;
}
int main(){
    int number;
    while (cin >> number){
        cout << number_of_digits(number) << endl;
    }
}