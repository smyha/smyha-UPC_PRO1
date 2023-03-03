#include <iostream>
using namespace std;

 
int main () {
  
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
        
        
    if (a1 == a2 and b1 == b2) cout << '=' << endl; // Si son iguals llavors "?"
    else if ((a1 > a2 and b1 <= b2) or (a1 >= a2 and b1 < b2)) cout << 1 << endl; // Si el primer interval esta dins del segon llavors "1"
    else if ((a1 < a2 and b1 >= b2) or (a1 <= a2 and b1 > b2)) cout << 2 << endl; // Si el segon interval esta dins del primer llavors "2"
    else cout << "?" << endl; // Si no pertanyen llavors "?"

}
