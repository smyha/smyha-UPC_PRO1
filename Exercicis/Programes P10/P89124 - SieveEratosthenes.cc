// P89124 - SieveEratosthenes
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<bool> sieve (int n){
    vector<bool> data(n + 1, true);
    data[0] = data[1] = false;
    for(int i = 2; i*i <= n; ++i){
        if (data[i])
        for (int j = i*i; j <= n; j = j + i){
            data[j] = false;
        }
    }
    return data;
}

int main(){
    const int M = pow(10,6);
    vector<bool> p = sieve(M);
    int n;
    while (cin >> n){
        if (p[n]) cout << n << " is prime" << endl;
        else cout << n << " is not prime" << endl;
    }
}