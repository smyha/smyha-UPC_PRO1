#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Print the letters (char) of the word in inversed order.
void PrintSwapWord(const string& word){
    for (int size = word.size() - 1; size >= 0; --size){
            cout << word[size];
        }
    cout << endl; 
}
// Print the order of the strings in inversed order.
void PrintInversedOrder (int number, int CurrentPosition){
    string word;
    cin >> word;
    
    if (CurrentPosition < number) PrintInversedOrder(number, CurrentPosition +1); // RECURSIVE STEP
    PrintSwapWord (word); // BASE STEP
}
   
int main(){
    int number;
    cin >> number;
    
    if (number >= 1){
        PrintInversedOrder(number, 1);
    }
}