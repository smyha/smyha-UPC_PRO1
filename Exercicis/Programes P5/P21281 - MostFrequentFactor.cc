#include <iostream>
using namespace std;
// Action to found the factor of a number
void factor(int n, int& f, int& q){
    int factor = 2; //First factor is 2
    f = 0; // Most frequent factor
    q = 0;  // Number of times the most frequent factor appears

    while (factor*factor <= n){
        int count = 0; // Reset the count if changes the factor
        while (n%factor == 0){
            n /= factor;
            ++count;
        }
        if (count > q and f < factor){
            f = factor;
            q = count;
        }
        ++factor;
    }
    if (f == 0 and q == 0){
        f = n;
        q = 1;
    }
}

int main () {
    int number;
    int f, q;
    
    while (cin >> number){
        factor (number, f, q);
        cout << f << ' ' << q << endl;
    }
}
