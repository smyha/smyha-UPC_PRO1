#include <iostream>
using namespace std;

int main() {
	string nom_1, nom_2;
    cin >> nom_1 >> nom_2;

    if (nom_1 == nom_2) cout << nom_1 << " = " << nom_2 << endl;
    else if (nom_1 > nom_2) cout << nom_1 << " > " << nom_2 << endl;
    else cout << nom_1 << " < " << nom_2 << endl;
}