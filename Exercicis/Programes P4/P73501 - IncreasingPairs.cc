// Write a program that reads sequences of natural numbers, 
// and that for each one prints the number of pairs of consecutive 
// numbers such that the second number of the pair is greater than the first one.

#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    for(int i = 1; i <= number; ++i){
        int first_number, previous_number;
        int count = 0;
        cin >> first_number;
        
        while (first_number != 0){
            cin >> previous_number;
            if (first_number < previous_number) ++count;
            first_number = previous_number;
        }
        cout << count << endl;
    }
}