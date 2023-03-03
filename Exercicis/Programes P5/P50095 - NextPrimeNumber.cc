#include<iostream>
using namespace std;
// Function for found if a number is prime
bool IsPrime (int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i){
        if (n%i == 0) return false;
    }
    return true;
}
// Action for found and project the next prime number
void next_prime (int n){
        int next_num = ++n;
        while (not IsPrime(next_num)) ++next_num;
        cout << next_num << endl;
}
// Main Function Program Code
int main(){
    int number;
    while (cin >> number){
        if (IsPrime(number)) next_prime(number);
    }
}
