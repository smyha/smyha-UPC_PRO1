#include<iostream>
using namespace std;
// Function to prove if the number is prime or not
bool IsPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i){
        if (n%i == 0) return false;
    }
    return true;
}
// Function to obtain the amount of digits of the number
int AmountDigits(int n){
    int amount_digits = 0;
    while (n > 0){
        amount_digits += n%10;
        n /= 10;
    }
    return amount_digits;
}
// Function to prove if the number is a perfect prime
bool is_perfect_prime (int n){
    if (not IsPrime(n)) return false;
    else if (n < 10) return true;
    return is_perfect_prime(AmountDigits(n));
}

int main(){
    int number;
    while (cin >> number){
        if (is_perfect_prime(number)) cout << number << " is perfect prime." << endl;
        else cout << number << " is not perfect prime." << endl;
    }
}
