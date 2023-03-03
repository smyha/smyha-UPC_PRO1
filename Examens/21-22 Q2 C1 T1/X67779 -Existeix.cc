// Given a sequence of non-negative integers we want to know the value of the first element that completes the following two conditions:
// 1.Its value is half of the maximum of the elements on the left hand side.
// 2.It is separated by an even number of elements from this maximum.

#include <iostream>
using namespace std;

int main() {
	int max;
	cin >> max; // non-empty sequence
	int p_max = 1;
	int act;
	int p_act = 2; // position of act
	bool found = false;
	while (not found and cin >> act) {
		if (act > max) {
			max = act;
			p_max = p_act;
		}
		else if (act*2 == max and (p_act - p_max)%2 == 1) found = true;
		++p_act;
	}
	if (found) cout << act << endl;
	else cout << "no existe" << endl;
}