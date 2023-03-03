#include<iostream>
#include<cmath>
using namespace std;

// Precondition: It holds for n ≥ 0.
// Precondition: Print 2n − 1 lines, following the pattern that can be deduced from the examples.
void PrintBars(int number){
    // RECURSIVE STEP: If number != 0.
    if (number > 1){
    
        PrintBars(number - 1);
        
        for (int i = 0; i < number; ++i) cout << '*';
        cout << endl;
        
        PrintBars(number - 1);
        
    }
    // BASE STEP: If number == 1.
    else cout << '*' << endl;
}

int main(){
    int number;
    cin >> number;
    PrintBars(number);
}