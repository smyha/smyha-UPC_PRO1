// Two non-negative integers n and m are complementary if (n + m) % 10 equals 0. 
// Write a program that, given a non-negative integer n and a sequence of non-negative integers that ends with -1, 
// outputs the first element in the sequence that is complementary to n, along with its position. 
// If that element does not exist, the program outputs an informative message

#include<iostream>
using namespace std;

int main(){

    int n,m;  // Non-negative integer n followed by a sequence of non-negative integers that ends with -1. 
    bool found = false; 
    int counter = 0; // Complementary number finder
    cin >> n >> m;

    while (not found and m != -1){
        ++ counter;
        // Condition and Meaning of the complementary of a number.
        if ((n + m)%10 == 0){
            found = true;
            cout << m << ": " << counter << endl;
        } 
        cin >> m;
    }
    if(not found) cout << "No existe" << endl; // No existe == Otherwise
}
    