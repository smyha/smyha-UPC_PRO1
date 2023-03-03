// Write a procedure void swap2(int& a, int& b);
// that swaps the value of its parameters.

#include<iostream>
using namespace std;
// REMEBER(!): In void actions there's no return value.
void swap2(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}
int main(){
    // Swap any two numbers of the input.
    int number1; int number2;
    cin >> number1 >> number2;
    int a = number1;
    int b = number2;
    swap2 (a, b); // Call of the void action
    cout << a << ' ' << b << endl;
}