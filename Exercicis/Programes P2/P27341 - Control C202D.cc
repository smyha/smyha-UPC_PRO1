#include <iostream>
using namespace std;

int main () {

    int a, b, suma_dels_cubs = 0;

    while ( cin >> a >> b) {
        for (int i = a; i <= b; ++i)
        suma_dels_cubs += i*i*i;
        cout << "suma dels cubs entre " << a << " i " << b << ": " << suma_dels_cubs << endl;
        suma_dels_cubs = 0;
    }
}
    
    