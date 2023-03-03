// X58180 - DigitSubchains
#include<iostream>
using namespace std;

bool is_subchain(int n1, int n2){
    if (n1 == 0) return true;
    while (n1%10 != n2%10 and n2 != 0) n2 /= 10;
    if (n2 != 0) return (n1/10,n2/10);
    return false;
}

int main(){
    int n1, n2;
    while (cin >> n1 >> n2){
        if (is_subchain(n1,n2)) cout << "yes" << endl;
        else cout << "no" << endl;
    }