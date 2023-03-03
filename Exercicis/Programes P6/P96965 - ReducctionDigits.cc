THESE ARE GOOD PROPOSALS TO SOLVE THE PROBLEM MORE 
EASILY BUT THE "JUTGE" COMPILER DOES NOT ACCEPT THEM.
-------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
// Function to reduce the amount of digits
// Precondition: n > 0 | n is a Natural Number
// Postcondition: Return the modified amount of digits
int reduccio_digits(int x){
    if (x < 10) return x%10;
    int sum = reduccio_digits(x/10)+x%10;
    // if (sum <= 9) return sum; 
    return reduccio_digits(sum);
}
int main(){
    int number;
    while (cin >> number) cout << reduccio_digits(number) << endl;
}
-------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
// Precondition: n > 0 | n is a Natural Number
// Postcondition: Return the modified amount of digits
// Function to return the amount of digits
int suma_digits(int x){
    if (x == 0) return 0;
    return suma_digits(x/10) + x%10;
}
// Function to reduce the amount of digits
int reduccio_digits(int x){
    // While the amount of digits is greater than 9 (one digit)
    while (suma_digits(x) > 9) x = suma_digits(x);
    return suma_digits(x);

}
int main(){
    int number;
    while (cin >> number) cout << reduccio_digits(number) << endl;
}