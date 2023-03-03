/*Write a program that reads a sequence of characters 
ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
*/

#include <iostream>
using namespace std;

int main(){
char c = 'x';
int counter = 0;

while (c != '.'){
    cin >> c;
    if (c == 'a') ++counter;
}
if (counter != 0) cout << "yes" << endl;
else cout << "no" << endl;
}
