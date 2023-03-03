#include <iostream>
using namespace std;

int main() {
	string p, act;
	cin >> p;
	int pos = 0; //pos of the last treated word
	bool found = false;
	while (not found and cin >> act) {
		if (act == p) found = true;
		++pos;
	}
	if (found) cout << pos << endl;
	else cout << "No existe" << endl;
}