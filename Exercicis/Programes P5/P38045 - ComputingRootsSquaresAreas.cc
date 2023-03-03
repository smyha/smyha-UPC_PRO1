// Write a program that reads a sequence of natural numbers, 
// and prints the square and the square root of each one.

#include<iostream>
#include<cmath>
using namespace std;

int main (){
    cout.setf(ios::fixed);
    cout.precision(6);
    int number;
    while (cin >> number){
        cout << number*number << ' ' << sqrt(number) << endl;
    }
}