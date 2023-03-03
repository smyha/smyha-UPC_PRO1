// Write a program that, given a sequence of lines with words, 
// tells which is the first line that has the words in increasing (lexicographic) order.

#include <iostream>
using namespace std;

int main() {
	int number, position = 0;
	bool found = false;
	while (not found and cin >> number){
	    // Count each position
        ++position;
        // Declares the words that (condition) have to be incrementing
        string prev, next;
        bool increasing = true;
		cin >> prev;
        // Read each word of the sequence
		for (int c = 2; c <= number; ++c) {
			cin >> next;
			if (next < prev) increasing = false;
			prev = next;
		}
        if (increasing) found = true;
	}
    if (found) cout << "The first line in increasing order is " << position << "." << endl;
	else cout << "There is no line in increasing order." << endl;
}
