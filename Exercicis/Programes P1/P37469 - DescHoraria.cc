# include <iostream>
using namespace std;

int main (){

    // Declarem la variable "n" com a "numero de segons d'entrada"

    int n;
    cin >> n;

    // Declarem variables hours, minutes and seconds per la descomposicio horaria (Factors de Conversio)
    

    int h = n/3600;
    int m = (n/60)%60;
    int s = n%60;
    
    // Finalment, sortida per pantalla

    cout << h << " " << m << " " << s << endl;

}