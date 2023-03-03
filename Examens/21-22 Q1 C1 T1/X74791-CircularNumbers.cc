#include <iostream>
using namespace std;

int main(){
    int numbers;
    int counter = 0;
    cin >> numbers;
    // REMEMBER: It's a path (with mark edge) not a research !
    while (numbers != -1){
        int palindromic_number = numbers;
        int last_digit = 0;
        
        // Obtain the last digit of the number.
        last_digit = numbers%10;
        
        // Obtain the first digit of the number.
        while (numbers >= 10){
            numbers /= 10;
        }
        // If the first digit of the number agree with last digit...
        if (numbers == last_digit){
            cout << palindromic_number << endl;
            ++ counter;
        }
        cin >> numbers;
    }
    cout << "total: " << counter << endl;
}