# include <iostream>
using namespace std;

int main () {

    int n, multiplication_table;
    cin >> n;

    for (int i=1; i <=10; ++i){
        multiplication_table = n*i;
        cout << n << "*" << i << " = " << multiplication_table << endl;
    }
}