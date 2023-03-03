#include <iostream>
using namespace std;

int main(){
    int i,x;
    int counter = 0;
    bool found = false;
    cin >> i;

    while (cin >> x){
        ++ counter;
        if (counter == i){
            cout << "At the position " << i << " there is a(n) " << x << "." << endl;
            found = true;
        }
    }
    if (found == false) cout << "Incorrect position." << endl;
}