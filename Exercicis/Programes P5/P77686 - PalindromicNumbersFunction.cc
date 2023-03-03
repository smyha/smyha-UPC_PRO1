#include<iostream>
using namespace std;

    bool is_palindromic(int n){
        int inverted = 0, digit;
        int aux = n;
        
        while (aux > 0){
            digit = aux%10;
            inverted = inverted*10 + digit;
            aux /= 10;
        }
        if (n == inverted) return true;
        return false;
    }   

int main(){
    int number;
    while (cin >> number){
        if (is_palindromic(number)) cout << number << " is a palindromic number." << endl;
        else cout << number << " is not a palindromic number." << endl;
    }
}