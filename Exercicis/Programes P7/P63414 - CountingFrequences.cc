#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Precondition: Input consists of a natural number n, followed by n natural numbers between 1000000000 and 1000001000 (both included).
//Postcondition: For each number x that appears in the sequence, print how many times it appears. The output must be sorted in increasing order by x.
void PrintCountingFrequences(vector <int> &sequence){
    // Set the input range to one vector, i.e. 0 to 1001.
    vector <int> input (1001,0);
    int size = sequence.size();
    // Count how many times the number appears in the sequence and store it in the vector <input>.
    for (int i = 0; i < size; ++i){
        ++input[sequence[i]%1000000000]; // Same as ++input[sequence[i]-1000000000]
    }
    // Sort the numbers of the vector
    sort (sequence.begin(),sequence.end());
    // Show how many times appear each number of the vector
    for (int i = 0; i < size; ++i){
        if (sequence[i] != sequence[i-1]) cout << sequence[i] << " : " << input[sequence[i]%1000000000] << endl;
    }
}

int main(){
    int number;
    cin >> number;
    //Push the elements of the sequence into the vector "sequence"
    vector <int> sequence(number);
    for (int i = 0; i < number; ++i) cin >> sequence[i];
    // Print the counting frequences
    PrintCountingFrequences (sequence);
}
   