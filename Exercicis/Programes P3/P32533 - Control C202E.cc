#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    for (int i = 0; i < number; ++i){
        for (int j = 1; j < number - i; ++j){
            cout << "+";
        }
        cout << "/";
        for (int k = 1; k <= i; ++k){
            cout << "*";
        }         
        cout << endl;
    }
}

