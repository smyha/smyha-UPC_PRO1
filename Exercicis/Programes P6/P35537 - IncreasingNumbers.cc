#include<iostream>
using namespace std;
// Precondition: n >= 0, n is a positive integer 
// Postcondition: Write a recursive function that tells if a natural number n is increasing or not.
bool is_increasing(int n){
    if (n <= 9) return true;
    else if (n%10 < (n/10)%10) return false;
    return is_increasing (n/10);
    
}
int main(){
    int number;
    while (cin >> number){
        if (is_increasing(number)) cout << number << " es creixent." << endl;
        else cout << number << " no es creixent." << endl;
    }
}