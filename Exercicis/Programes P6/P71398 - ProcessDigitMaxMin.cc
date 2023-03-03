#include<iostream>
using namespace std;

// Precondition: It holds for n ≥ 0.
// Precondition: Calculate the maximum and the minimum of a number.
void digit_maxim_i_minim(int n, int& maxim, int& minim){
    // BASE STEP (n < 10 | n contains one digit only)
    if (n < 10){
        maxim = n;
        minim = n;
    }
    // RECURSIVE STEP (n >= 10)
    else {
        digit_maxim_i_minim(n/10, maxim, minim);
        // Obtain the last digit of the number
        int CurrentDigit = n%10;
        // Conditions for identify tha maximum and minimum.
        if (CurrentDigit >= maxim) maxim = CurrentDigit;
        else if (CurrentDigit < minim) minim = CurrentDigit;
    } 
}

int main(){
    int number;

    while (cin >> number){
        int maxim = 0, minim = 0;
        digit_maxim_i_minim(number,maxim, minim);
        cout << maxim << ' ' << minim << endl;
    } 
}