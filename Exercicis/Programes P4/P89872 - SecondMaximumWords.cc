// Get a sequence of strings and print the second largest word in alphabetical order

#include <iostream>
using namespace std;

int main() {
    string word;
    string largest = " "; // REMEMBER (!): Initialize the variables that will be used at the loop.
    string second_largest = " ";

    while (cin >> word) {
        // If the word is largest than the second largest, 
        // with this loop it will be the second largest.
        if (word > second_largest and word != largest){
            // If the word is largest than the largest (previous one),
            // it will be the largest one, and the second largest will be
            // the previous largest in this loop.
            if (word > largest){
                second_largest = largest;
                largest = word;
            }
            // If the word is minor than the previos largest, it will be the second largest.
            else {
                second_largest = word;
            }
        }
    }
    if (second_largest != " ") cout << second_largest << endl;
}