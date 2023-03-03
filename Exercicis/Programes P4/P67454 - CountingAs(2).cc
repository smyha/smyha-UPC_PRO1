/* Write a program that reads a sequence of characters and prints 
the number of letters ‘a’ in the sequence before the first period.
*/

#include <iostream>
using namespace std;

int main(){
    char c = 'x'; // Variable char for read one by one the characters of a sequence of words.
    int count = 0; // Counter for a's.
    bool point = false;
    while (cin >> c){
        if (c == '.') point = true;
        if (c == 'a' and point == false) ++count;
    }
    cout << count << endl;  
}