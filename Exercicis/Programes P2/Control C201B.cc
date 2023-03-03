# include <iostream>
using namespace std;

int main () {

    int n, multiplication_table;
    cin >> n;

    for (int i=1; i <=n; ++i){
        multiplication_table = n*i;
        cout << n << " x " << i << " = " << multiplication_table << endl;
    }
}