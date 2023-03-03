#include<iostream>
using namespace std;

int sum_of_digits(int n){
    if (n < 10) return n;
    return sum_of_digits(n/10) + n%10;
}

int main(){
    int pre, next;
    int counter = 0;
    cin >> pre;
    
    while (cin >> next){
        int amount = sum_of_digits(next);
        if (pre%amount == 0) ++counter;
        pre = next;
    }
    
    cout << counter << endl;
}