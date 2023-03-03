#include <iostream>
using namespace std;

int main(){
    int i, x;
    int counter = 0;
    int remember = 0;
    cin >> i;

    cout << "At the position " << i << " there is a(n) ";

    while (cin >> x){
        ++ counter;
        if (counter == i) remember = x;
    }
    cout << remember << "." << endl;
}