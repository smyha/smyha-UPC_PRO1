#include <iostream>
using namespace std;

int main(){
    char parentheses;
    int counter = 0;

    while (counter >= 0 and cin >> parentheses){
        if (parentheses == '(' ) ++ counter;
        else --counter;        
    }
    if (counter == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}