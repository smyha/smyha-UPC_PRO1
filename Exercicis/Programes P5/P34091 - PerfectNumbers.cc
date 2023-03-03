//P34091 - Perfect Numbers
#include<iostream>
using namespace std;

bool is_perfect(int n){
    int amount_divisors = (n != 1);
    // Found the divisors of the number
    for (int i = 2; i*i <= n; ++i){
        if (n%i == 0) amount_divisors += i + n/i;
        // (*) cout << i <<  ' ' << n/i << ' ' << amount_divisors << endl;
    }
    return (amount_divisors == n);
}
int main(){
    int number;
    cin >> number;
    if (is_perfect(number)) cout << number << " is perfect" << endl;
    else cout << number << " is not perfect" << endl;
}