// X65377 - Two-Three Balanced Numbers
#include<iostream>
using namespace std;
//pre: n > 0
//post: returns true when n is two-three-balanced. Returns false otherwise 
bool is_two_three_balanced(int n){
    // If the number is divisible for 2 and 3 is divisible for 6 too.
    if (n%6 == 0) return is_two_three_balanced(n/6);
    return (n%2 != 0 and n%3 != 0);
}

int main() {
    int n;
    while (cin >> n) {
        if (is_two_three_balanced(n)) cout << "yes";
        else cout << "no";
        cout << endl;
    }
} 
 
