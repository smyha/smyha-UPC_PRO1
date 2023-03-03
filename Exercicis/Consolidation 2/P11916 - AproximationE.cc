//P11916 - AproximationE.cc
#include<iostream>
using namespace std;

int main(){
    // Set precision while print data
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int n;
    double aprox_of_e = 1;
    double factorial = 1;
    // Precondition: Input consists of several natural numbers n between 0 and 20.
    while (cin >> n){
        if (n == 0){
             cout << "With " << n << " term(s) we get " << "0.0000000000" << "." << endl;
        }
        // REMEMBER: n! = n(n-1)!
        else {  
            for (int i = 1; i < n; ++i) {
                factorial = factorial*i;
                aprox_of_e = aprox_of_e + (1.0 / factorial);
            }
            cout << "With " << n << " term(s) we get " << aprox_of_e << "." << endl;
            aprox_of_e = 1;
            factorial = 1;
        }
    }
}