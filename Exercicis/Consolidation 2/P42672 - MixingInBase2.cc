// P4672 - Mixing in base 2
#include<iostream>
using namespace std;
// Recursive function to obtain the number in base 2
void print_mixed (int n1, int n2){
    if (n1/2 != 0) print_mixed(n1/2,n2/2);
    cout << n1%2 << n2%2;
}

int main(){
    int n1, n2;
    while (cin >> n1 >> n2){
        print_mixed (n1, n2);
        cout << endl;
    }
}