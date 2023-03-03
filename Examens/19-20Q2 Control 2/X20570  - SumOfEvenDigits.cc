//X20570 - Sum of Even Digits
#include<iostream>
using namespace std;
// Pre: n >= 0
// Post: returns the sum of n's even digits
int even_digits(int n) {
    if (n < 10 and n%2 == 0) return n;                           // Base Case
    else if((n%10)%2 == 0) return even_digits(n/10) + n%10;      // Recursive Base
    return even_digits(n/10);
}

int main() {
    int x;
    while (cin >> x) cout << even_digits(x) << endl;
}
