#include <iostream>
using namespace std;

bool prime(int n) {
    // If the number is minor or equal than one, is not prime.
    if (n <= 1) return false;
    // If the following number complies with the conditions
    else {
        int i = 2;
        while (i * i <= n) {
            if (n % i == 0) return false;
            ++i;
        }
        return true;
    }
}

int main() {
    int a;
    int b;

    cin >> a;

    for (int i = 1; i <= a; ++i) {
        cin >> b;
        if (prime(b)) cout << b << " is prime" << endl;
        else cout << b << " is not prime" << endl;
    }
}
    
    
    