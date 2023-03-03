//X25951 - Pitagoric Pairs
#include<iostream>
using namespace std;
// Function to found if two numbers are a pitagoric pair
bool is_ptg(int a, int b){
    int amount = a*a + b*b;
    for (int i = 0; i*i <= amount; ++i){             //Search among all the possible divisors of this number,
        if (i*i == amount) return true;             // a divisor which multiplying by it gives the number of the amount.
    }
    return false;
}

int main(){
    int current, pre;
    int position = 1;
    bool first_pair = false;
    cin >> current;
    while (not first_pair and cin >> pre){
        if (is_ptg(current, pre)){
            cout << "First pythagorean pair " << current << ' ' << pre << " at position " << position << endl;
            first_pair = true;
        }
        current = pre;
        ++position;
    }
    if (not first_pair) cout << "No pythagorean pairs" << endl;
}