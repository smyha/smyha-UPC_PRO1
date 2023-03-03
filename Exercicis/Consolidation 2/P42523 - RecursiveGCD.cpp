// Euclidean Division from a for b: a = bq + r
// REMARK: By Euclides Theorem have: 𝑚𝑐𝑑(𝑎, 𝑏) = 𝑚𝑐𝑑(𝑎 − 𝑏𝑞, 𝑏) = 𝑚𝑐𝑑(𝑟, 𝑏)
// Apply successively: 𝑚𝑐𝑑(𝑎, 𝑏) = 𝑚𝑐𝑑(𝑏, 𝑟)
#include<iostream>
using namespace std;

int gcd (int a, int b){
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    int a, b;
    while (cin >> a >> b){
        cout << gcd(a, b) << endl;
    }
}