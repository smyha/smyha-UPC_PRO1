// Write a program that reads a character and tells 
// if it is a letter, if it is a vowel, if it is a consonant, 
// if it is an uppercase letter, if it is a lowercase letter and if it is a digit.

#include<iostream>
using namespace std;
   
void print_line(char c, string s, bool b){
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main(){
    // Make a bool for Check if it is a letter, uppercase and a vowel
    char input;
    cin >> input;

    bool isLetter = ((input <= 'z' and input >= 'a') or (input <= 'Z' and input  >= 'A'));
    bool vowel = (input == 'a' or input == 'e' or input == 'i' or input == 'o' or input == 'u' or input == 'A' or input == 'E' or input == 'I' or input == 'O' or input == 'U');
    bool uppercase = (input <= 'Z' and input >= 'A');
    bool lowercase = (input <= 'z' and input >= 'a');
    bool digit (input <= '9' and input >= '0');

    print_line(input, "letter", isLetter);
    print_line(input, "vowel",isLetter and vowel);
    print_line (input, "consonant", isLetter and not vowel);
    print_line(input, "uppercase", isLetter and uppercase);
    print_line(input, "lowercase", isLetter and lowercase);
    print_line(input, "digit", digit and not isLetter);
}