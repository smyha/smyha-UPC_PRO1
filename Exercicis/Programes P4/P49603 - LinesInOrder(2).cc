// Write a program that, given a sequence of lines with words, 
// tells which is the last line that has the words in increasing (lexicographic) order.

#include <iostream>
using namespace std;

int main() {
	int number, counter = 1, last_position = 0;
    bool increasing = true;

	while (cin >> number) {
		increasing = true;
        string prev, next;
		
        if (number > 0) cin >> prev;
		for (int i = 1; i < number; ++i){
			cin >> next;
			if (next < prev) increasing = false;
			prev = next;
		}

		if (increasing) last_position = counter;
		++counter;
	}
	if (last_position != 0) cout << "The last line in increasing order is " << last_position << "." << endl;
	else cout << "There is no line in increasing order." << endl;
}
