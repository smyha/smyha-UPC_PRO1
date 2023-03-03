#include<iostream>
using namespace std;

int sum_min_max(int x, int y, int z){
    if ((x >= y and y >= z) or (x <= y and y <= z)) return x + z;
    else if ((x >= z and z >= y) or (x <= z and z <= y)) return = x + y;
    return z + y;
}

int main(){
    int a, b ,c;
    cin >> a >> b >> c;
    cout << sum_min_max(a, b, c) << endl;
} 
