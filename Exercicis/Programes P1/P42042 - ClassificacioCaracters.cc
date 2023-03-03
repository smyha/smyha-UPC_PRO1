#include <iostream>
using namespace std;

int main () {

    char x;
    cin >> x;
   
// Majuscules + Minuscules

    if ( x >= 65 and x <= 90) {
        cout << "majuscula" << endl;
    }

    else if (x >= 97 and x <= 122)
    {
        cout << "minuscula" << endl;
    }
// Vocals + Consonants

    if (x == 'a' or x =='e' or x =='i' or x =='o' or x =='u' or x =='A' or x =='E' or x =='I' or x =='O' or x =='U') {
        cout << "vocal" << endl;
    }
    else cout << "consonant" << endl;
}
