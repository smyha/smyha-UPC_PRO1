// Write a procedure void decompose(int n, int& h, int& m, int& s);
// that, given a quantity of seconds n, computes how many hours h, minutes m and seconds s it represents.

#include<iostream>
using namespace std;
// REMEBER(!): In void actions there's no return value.
void decompose(int n, int& h, int& m, int& s){
    h = n/3600;
    m = (n/60)%60;
    s = n%60;
}
int main(){
    int h, m, s, n;
    cin >> n;
    decompose(n, h, m, s);
    cout << h << ':' << m << ':' << s << endl;
}