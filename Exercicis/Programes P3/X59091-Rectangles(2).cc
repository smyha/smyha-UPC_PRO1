/* Write a program that prints n× m rectangles. 
Print each rectangle in an independent way, fill it up with 9, followed by 8, …followed by 0, etc.
*/

#include <iostream>
using namespace std;

int main(){
    // numbers_1 = n, numbers_2 = m
    int numbers_1, numbers_2; 
    //Scope for the first reading : do not endl.
    bool first = true;
    
    while(cin >> numbers_1 >> numbers_2){
        // Turn off the first scope
        if (first == false) cout << endl;
        first = false;
         // Start number and return
        int reference_number = 9;
        for (int i = 0; i < numbers_1; ++i){ // rows
            for (int j = 0; j < numbers_2; ++j){ //columns
                if (reference_number < 0) reference_number = 9;
                cout << reference_number;
                --reference_number;
            }
            cout << endl;
        }
    }
}