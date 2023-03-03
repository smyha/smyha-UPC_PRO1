# include <iostream>
using namespace std;

int main () {

    int numero_inicial, numero_ultim;
    cin >> numero_ultim;
    numero_inicial = 0;

    for (int i = 1; i <= numero_ultim ; ++i){
      numero_inicial += i*i; 
    }
      cout << numero_inicial << "" << endl;  
    
}