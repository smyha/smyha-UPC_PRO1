//X10549 - NumberWithoutZeros
#include<iostream>
using namespace std;
// Precondition: x > 0
// Postcondition: returns the value of the x without 0 digits
int remove_zeros(int x){
    if (x < 10) return x;                               // Base Case
    if (x%10 == 0) return remove_zeros(x/10);           // Recursive Case : If the digit is 0
    else return 10*remove_zeros(x/10) + (x%10);         // If the digit is not 0.
}

int main(){
    int n;
    while (cin >> n){
        cout << remove_zeros(n) << endl;
    }
}