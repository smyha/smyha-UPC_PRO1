/* Given an initial capital c in euros, an annual interest rate i (expressed in %), a time t in years
and an indication whether the interest is simple or compound, determine the amount of
euros the initial capital is transformed into. */

#include <iostream>
using namespace std;

int main(){
    double capital, interest;
    int time;
    string indicator_whether; // "simple" or "compund"
    cin >> capital >> interest >> time >> indicator_whether;

    // Rate the decimals in the output
    cout.setf(ios::fixed);
    cout.precision(4);

    // Calculate interest simple
    if (indicator_whether == "simple"){
        capital = capital + capital*(interest/100)*time;
        cout << capital << endl;
    }
    // Calculate interest compund
    else{
            for (int i = 0; i < time; ++i){
                capital += capital *(interest/100);
            }
            cout << capital << endl;
        }
    }

// The second if can be neglected by using an else, 
//but this would make the program less strict.