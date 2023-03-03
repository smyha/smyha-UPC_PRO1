#include<iostream>
using namespace std;
// Function to calculate the maximum of a pair numbers.
int max(int n){
    int max = 0;
    while (n != 0){
        if (n%10 > max) max = n%10;
        n /= 10;
    }
    return max;
}
// Precondition: 0 < x < 10^9
// Postcondition: Return the fattening value of a number 
int fatten(int x){
    if (x/10 == 0) return max(x);
    return fatten(x/10)*10 + max(x);
}

int main(){
    int number;
    while (cin >> number){
        cout << fatten(number) << endl;
    }
}