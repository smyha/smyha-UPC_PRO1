// Write an iterative function that, given a natural n, returns its factorial n!.
#include <iostream>
using namespace std;

int factorial(int n){
    int f = 1; // !0 = 1 and !1 = 1.
    for(int i = 2; i <= n; ++i){
        f = f*i;
    }
    return f;
}
int main (){
    int number;
    cin >> number;
    cout << factorial(number) << endl;
}