#include<iostream>
#include<vector>
using namespace std;

void PrintSwapVector(int num){
    vector <int> sequence (num);
    // Full the vector with elements of the sequence.
    for (int i = 0; i < num; ++i) cin >> sequence[i];
    // Print the sequence in invers order.
    for (int j = num - 1; j >= 0; --j){
        cout << sequence[j];
        if (j != 0) cout << ' ';
    }
}

int main(){
    int number;
    while (cin >> number) {
        PrintSwapVector(number);
        cout << endl;
    }
}