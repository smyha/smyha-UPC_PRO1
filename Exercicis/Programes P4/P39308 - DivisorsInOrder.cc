// Write a program to print in order all the divisors of a given number.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; //  n = n [1-10^9]  

    while (cin >> n){
        cout << "divisors of " << n << ":";

        // Calc of the square root of n
        int root = 1;
        while (root*root < n) ++root;

        // Loop for "Small" Divisors: Numbers from 1 to root
        for (int i = 1; i <= root; ++i){
            if (n%i == 0) cout << ' ' << i;
        }

        // Loop for "Large" Divisors: Numbers from root to n
        for (int j = root - 1; j >= 1; --j){
            if (n%j == 0 and n/j != root) cout << ' ' << n/j;
        }
        cout << endl;
    }
}      
