#include<iostream>
#include<vector>
using namespace std;

int main(){
    int number, elements;
    cin >> number;
    vector <int> sequence(number);
    
    // Full the vector with elements of the sequence
    for (int i = 0; i < number; ++i){
        cin >> sequence[i];
    }
    int counter = 0; 
    -- number;
    // Read the sequence from left to right (linear search)
    for (int j = 0; j < number; ++j){
        if (sequence[j] == sequence[number]) ++counter;
    }
    cout << counter << endl;
}
