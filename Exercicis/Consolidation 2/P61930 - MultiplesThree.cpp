// Multiples of three (recursive)
#include<iostream>
using namespace std;

int sum_of_digits (int n){
    if (n == 0) return n;
    return sum_of_digits(n/10) + n%10;
}

bool is_multiple_3 (int n){
    return n%3 == 0;
}

int main(){
    int n;
    while (cin >> n){  
        int amount = sum_of_digits(n);
        cout << is_multiple_3(amount) << endl;
    }
}