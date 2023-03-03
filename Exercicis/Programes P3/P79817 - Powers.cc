/* Write a program to compute powers. */

#include <iostream>
using namespace std;

int main (){
    int num, exp;
    int suma_total = 1;

    while (cin >> num >> exp) {
        for (int i = 0; i < exp; ++i) {
            suma_total *= num;                
        }
    cout << suma_total << endl;
    suma_total = 1;
    }    
}
