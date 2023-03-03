#include<iostream>
using namespace std;

// Precondition: It holds for n ≥ 0.
// Precondition: Print 2n − 1 lines, following the pattern that can be deduced from the examples.
void PrintBars(int n){
    // RECURSIVE STEP: If number != 0.
    if (n > 1){
        PrintBars(n - 1);
        PrintBars(n - 1);
        
        for (int i = 0; i < n; ++i){
            cout << '*';
        }
        cout << endl;
    }
    // BASE STEP: If number == 1.
    else cout << '*' << endl;
}

int main(){
    int number;
    cin >> number;
    PrintBars(number);
}