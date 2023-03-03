// Write a program that for every given n prints an “octagon of size n” according to the pattern shown in the examples.

#include <iostream>
using namespace std;

int main(){
    int size_number;
    while (cin >> size_number){
        // First Part of the Octagon
        for (int i = 0; i < size_number-1; ++i) {
            for (int v = 0; v < size_number-1-i; ++v) cout << " ";
            for (int j = 0; j < size_number+2*i; ++j) cout << "X";
            cout << endl;
        }
        // Middle Part of the Octagon
        for (int i1 = 0; i1 < size_number; ++i1){
            for (int j1 = 0; j1 < 2*size_number + (size_number - 2); ++j1)cout << "X";
            cout << endl;
        }
        // Last Part of the Octagon
        for (int i2 = size_number -1; i2 > 0; --i2){
            for (int j2a = size_number - 1; j2a >= i2; --j2a) cout << " ";
            for (int j2b = 0; j2b < size_number + 2*(i2-1); ++j2b) cout << "X";
            cout << endl;
        }
        cout << endl;
    }
}