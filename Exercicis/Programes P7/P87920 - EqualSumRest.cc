#include<iostream>
#include<vector>
using namespace std;
// Function to prove if the amount of numbers is equal to one of the numbers of the sequence/vector
bool IsEqual (int number){
    vector <int> sequence(number);
    int AmountOfTheRest = 0;
    // Full the vector with the numbers of the sequence
    for (int i = 0; i < number; ++i){
        cin >> sequence[i];
        AmountOfTheRest += sequence[i];
    }
    bool found = false;
    int position = 0;
    while (position < number and not found) {
        if (AmountOfTheRest - sequence[position] == sequence[position]) found = true;
        ++position;
    }
    return found;
}

int main(){
    int number;
    
    while (cin >> number){
        if (IsEqual(number)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
} 