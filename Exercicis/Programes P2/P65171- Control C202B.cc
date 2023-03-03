#include <iostream>
using namespace std;

int main(){

    double nombre_natural;
    cin >> nombre_natural;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    double nombres_x;
    double sumatori_1 = 0;
    double sumatori_2 = 0;

    for (int i = 0; i < nombre_natural; ++i) {
        cin >> nombres_x;
        sumatori_1 += nombres_x*nombres_x;
        sumatori_2 += nombres_x;
    }
    
    double firstpart = sumatori_1 * (1/(nombre_natural-1));
    double secondpart = sumatori_2 * sumatori_2 * (1/(nombre_natural*(nombre_natural-1)));

    double resultat = firstpart - secondpart;

    cout << resultat << endl;

}