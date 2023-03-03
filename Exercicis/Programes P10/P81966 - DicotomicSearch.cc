// P81966 - Dicotomic Search
#include<iostream>
#include<vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right){
    if (left > right) return -1;
    int m = (left + right)/2;
    if (v[m] < x) position (x, v , m + 1, right);
    else if (v[m] > x) position (x, v , left, m - 1);
    return m;
}

int main(){
    int n, x ;
    cin >> x >> n ;
    vector<double> v (n) ;
    int pos = position (x, v, 0, v.size()-1);
    cout << pos << endl;
}