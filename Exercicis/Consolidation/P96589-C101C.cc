//Your task is to write a program that reads a character and prints if this is a letter, a digit, or it is not either a letter nor digit.

#include<iostream>
using namespace std;

int main(){
    char identifier;
    cin >> identifier;

    // Digit Identifier
    if ((identifier >= '0') and (identifier <= '9')) cout << "digit" << endl;

    // Word Identifier
    else if (((identifier >= 'a') and (identifier <= 'z')) or ((identifier >= 'A') and (identifier <= 'Z'))) cout << "lletra" << endl;

    // Else Identifier
    else cout << "res" << endl;
}