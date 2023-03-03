#include <iostream>
using namespace std;

int main () {

    int n;
    int rounds = 0;
    cin >> n;
    n *= 2;
    bool game_end = false;
    bool first = true;
    int previous = 0;

    while (not game_end and n > 0){

        int inputs, inputs2;
        cin >> inputs;
        inputs2 = inputs;

        int digits = 1;
        while (inputs > 9){
            inputs /= 10;
            ++digits;
        }

        for (int i = 0; i < digits/2; ++i) {
            inputs2 /= 10;
        }

        if ((not first and inputs2%10 != previous) or digits%2 == 0) game_end = true;
        
        previous = inputs2%10;
        ++rounds;
        --n;
        first = false;
        }

    if (not game_end) cout << "=" << endl;
    else if (rounds%2 == 0) cout << "A" << endl;
    else cout << "B" << endl;
    }