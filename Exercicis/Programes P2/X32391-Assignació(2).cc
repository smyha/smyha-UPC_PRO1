// Escriviu un programa que compti quantes setmanes acaben amb un saldo estrictament positiu.

#include <iostream>
using namespace std;

int main(){

    int despeses, estalvis, setmanes,ingres;
        cin >> despeses >> estalvis >> setmanes;
        int despeses_setmanals = despeses;
        int positiu = 0;
        
        for (int i = 1; i <= setmanes ; i++){ //Recorrem les setmanes passades per paràmetre
            cin >> ingres;
            estalvis += ingres; //Augmentem estalvis
            estalvis -= despeses_setmanals; //restem als estalvis les despeses
            if (estalvis > 0) positiu += 1; //Comprovem si seguim positius
            despeses_setmanals += despeses;
        }
        cout << positiu << endl;
    }