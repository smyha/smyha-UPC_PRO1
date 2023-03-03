#include <iostream>
using namespace std;

int main () { 

    int k, modified_k;
    cin >> k;

// Para base i, divide k entre i hasta que el quociente sea 0, i cuenta cada division.
        
    for (int b = 2; b <= 16; ++b) {
        int digits_count = 0 ;
        modified_k = k;
            
        while ( modified_k != 0) {
        modified_k /= b;
        ++digits_count;
        
        }

        cout << "Base " << b << ": " << digits_count << " cifras." << endl;
               
    }
}