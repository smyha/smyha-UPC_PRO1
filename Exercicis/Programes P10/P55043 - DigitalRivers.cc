// P55043 - DigitalRivers
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int amount_of_digits(int n){
    if (n < 10) return n;
    return amount_of_digits(n/10) + n%10;
}

int encounter_of_rivers(int n){
    int river1 = 1;
    int river3 = 3;
    int river9 = 9;
    while (n != river1 and n != river3 and n != river9){
        if (river1 < n) river1 += amount_of_digits(river1);
        else if (river3 < n) river3 += amount_of_digits(river3);
        else if (river9 < n) river9 += amount_of_digits(river9);
        else n += amount_of_digits(n);
    }
    return n;
}

int main(){
    int n;
    while (cin >> n){
        cout << encounter_of_rivers(n) << endl;
    }
}