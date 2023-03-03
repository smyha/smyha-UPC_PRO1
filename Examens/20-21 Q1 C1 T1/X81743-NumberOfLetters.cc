// Write a program such that given an integer n > 0, 
// two letters c1 and c2 in alphabetical order, and a sequence of letters, 
// outputs the number of the n-th first letters in the sequence that are between c1 and c2.

#include<iostream>
using namespace std;

int main(){
    int n; // n > 0
    int counter = 0;
    char c1,c2;
    cin >> n >> c1 >> c2;

    // REMEMBER: This is a path not a research, so we must use FOR loop.
    for (int loop_counter = 1; loop_counter <= n; ++loop_counter){
        char input_letter;
        cin >> input_letter;
        if (input_letter >= c1 and input_letter <= c2) ++ counter;
    }
    cout << counter << endl;
}