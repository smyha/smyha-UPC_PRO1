// Write a program that provided two integers n and b where n ≥ 1 and b ≥ 0, 
// computes the greatest integer a such that an = a×⋯× a is less or equal than b. 
// For instance for n = 4 and b = 45 number a is 2 because 2×2×2×2 is less or equal than 45 but 3×3×3×3 is greater than 45.

#include<iostream>
using namespace std;

int main(){
    int n,b; // Number n is greater than zero and integer b is nonnegative
    
    while (cin >> n >> b){
        int count = 0;
        int power;
        // Do this loop FOR power minor than number b.
        for (int i = 1; power < b; ++i){
            // Initializes the power inside the main loop.
            power = 1;
            // Do this loop FOR an integer minor than number n.
            for (int j = 0; j < n; ++j){
               power *= i;
            }
            ++ count;
        }
        if (power == b) cout << count << endl;
        else cout << count -1 << endl;
    }
}