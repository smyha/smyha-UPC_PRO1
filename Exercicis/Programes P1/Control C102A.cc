# include <iostream>
using namespace std;

int main () {

    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    
    // Si "x" es més gran que "a" i més petit que "b" o més petit que "c" i més gran que "d" ...

    if ((x >= a and x <= b) or (x >= c and x <= d)){
        cout << "si" << endl;
    }
    // Si no...

    else {
        cout << "no" << endl;
    }
}